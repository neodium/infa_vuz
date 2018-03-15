#include "stdafx.h"
#include "header.h"
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int a;
int aN = 0;

int menu(){
	system("cls");
	int option = 0, k = 0;
	setlocale(LC_ALL, "rus");
	do {printf("\n|------------------------------------|\n\n");
	printf("1. Создать файл.\n");
	printf("2. Вывести файл.\n");
	printf("3. Определить и записать ниже среднего в новый файл.\n");
	printf("4. Определить общий рост и добавить в начало исх. файла.\n");
	printf("5. Выход.\n");
	printf("\n|------------------------------------|\n\n");
	scanf_s("%d", &option);
	printf("\n");
	if (option>0 && option<6) k=1;
	} while (!k);
	return option;
}

void create_file(FILE * g){
	int i;
	RR *spisok;
	char c;

	g = fopen("spisok1.dat", "wb");

	printf("\nВведите кол-во студентов: ");
	scanf_s("%d", &a);
	while((c = getchar()) != '\n' && c != EOF);
	spisok = (RR *)malloc(sizeof(RR)*a);

	for (i=0; i<a; i++){
		printf("\nВведите фамилию студента: ");
		gets((spisok+i)->N);
		printf("\nВведите рост студента: ");
		scanf_s("%d", &(spisok+i)->ROST);
		while((c = getchar()) != '\n' && c != EOF);
		printf("\nВведите группу студента: ");
		gets((spisok+i)->GRUP);
		fwrite(&spisok[i], sizeof(RR), 1, g);
	}
	fclose(g);
	free(spisok);
}

void output_file(FILE * g){
	int i, option = 0;
	char c;
	RR *spisok;

	do {
		system("cls");
		printf("\n|------------------------------------|\n\n");
		printf("1. Вывести исходный файл.\n");
		printf("2. Вывести новый файл.\n");
		printf("3. К меню.\n");
		printf("\n|------------------------------------|\n");
		scanf_s("%d", &option);
		while((c = getchar()) != '\n' && c != EOF);

		switch(option){
			case 1:
				if ((g = fopen("spisok1.dat", "rb")) == NULL || a == 0){
					printf("\nФайл не существует или кол-во студентов не задано.\n");
					_getch();
				} else {
					system("cls");
					spisok = (RR *)malloc(sizeof(RR)*a);
					printf("\n|--Фамилия---Рост---Группа--|\n");
					for (i=0; i<a; i++){
						read_n(g, i, spisok);
						printf("%s\t%d\t%s\t\n", spisok->N, spisok->ROST, spisok->GRUP);
					}
					free(spisok);
					fclose(g);
					_getch();
				}
				break;
			case 2:
				if ((g = fopen("spisok2.dat", "rb")) == NULL || aN == 0){
					printf("\nФайл не существует или кол-во студентов не задано.\n");
					_getch();
				} else {
					system("cls");
					spisok = (RR *)malloc(sizeof(RR)*aN);
					printf("\n|--Фамилия---Рост---Группа--|\n");
					for (i=0; i<aN; i++){
						read_n(g, i, spisok);
						printf("%s\t%d\t%s\t\n", spisok->N, spisok->ROST, spisok->GRUP);
					}
					free(spisok);
					fclose(g);
					_getch();
				}
				break;
			case 3:
				break;
		}
	} while (option != 3);
}

void searchandcreate(FILE * g){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
	aN = 0;
	int i, j, d=0, k=0, l=0, srRost=0, toAdd[100];
	char grOption[6];
	RR *spisok;
	RR *spisokBuf;
	FILE *f;
	
	system("cls");
	printf("\n|------------------------------------|\n\n");
	printf("Введите группу студентов: \n");
	gets(grOption);

	if ((g = fopen("spisok1.dat", "rb")) == NULL || a == 0){
		printf("\nФайл не существует или кол-во студентов не задано.\n");
	} else {
		spisok = (RR *)malloc(sizeof(RR)*a);
		for (i=0; i<a; i++){
			read_n(g, i, spisok);
			if (strcmp(spisok[0].GRUP, grOption) == 0){
				srRost = srRost + spisok[0].ROST;
				d++;
			}
		}
		srRost = srRost/d;
		rewind(g);
		for (i=0; i<a; i++){
			read_n(g, i, spisok);
			if (spisok[0].ROST < srRost && strcmp(spisok[0].GRUP, grOption) == 0){
				toAdd[aN] = i;
				aN++;
			}
		}
		rewind(g);
		f = fopen("spisok2.dat", "wb");
		spisokBuf = (RR *)malloc(sizeof(RR)*aN);
		for (i=0;i<a;i++){
			read_n(g, i, spisok);
			for (j=0;j<aN;j++){
				if (i == toAdd[j]){
					write_n(f, l, spisok);
					l++;
					}
				}
		}
		/*rewind(g);
		fclose(g);
		g = fopen("spisok2.dat", "wb");
		for (i=0; i<aN; i++){
			write_n(g, i, &spisokBuf[i]);
		}*/
		free(spisok);
		free(spisokBuf);
		fclose(g);
		fclose(f);
		printf("Выполнено!\n");
	}
}

void addObsh(FILE * g){
	int i, srRost=0;
	RR *spisok;
	RR *spisokBuf;
	FILE *f;

	if ((g = fopen("spisok1.dat", "rb+")) == NULL || a == 0){
		printf("\nФайл не существует или кол-во студентов не задано.\n");
	} else {
		spisok = (RR *)malloc(sizeof(RR)*a);
		for (i=0; i<a; i++){
			read_n(g, i, spisok);
			srRost = srRost + spisok[0].ROST;
		}
		rewind(g);
		srRost = srRost/a;
		f = fopen("buffer.dat", "wb");
		for (i=0; i<a; i++){
			read_n(g, i, spisok);
			write_n(f, i, spisok);
		}
		fclose(f);
		strcpy(spisok[0].N, "ОБЩИЙ РОСТ");
		strcpy(spisok[0].GRUP, "НЕТ");
		spisok[0].ROST = srRost;
		write_n(g, 0, spisok);
		f = fopen("buffer.dat", "rb");
		for (i=1;i<a+1;i++){
			read_n(f, i-1, spisok);
			write_n(g, i, spisok);
		}
		rewind(g);
		a=a+1;
		free(spisok);
		fclose(g);
		printf("Выполнено!\n");
	}
}

void read_n(FILE * g, int n, RR * p){
	fseek(g, n*sizeof(RR), SEEK_SET);
	fread(p, sizeof(RR), 1, g);
}

void write_n(FILE * g, int n, RR * p){
	fseek(g, n*sizeof(RR), SEEK_SET);
	fwrite(p, sizeof(RR), 1, g);
}
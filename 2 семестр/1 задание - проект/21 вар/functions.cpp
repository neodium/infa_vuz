#include "stdafx.h"
#include "header.h"
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int a;
int aN;

int menu(){
	system("cls");
	int option = 0, k = 0;
	setlocale(LC_ALL, "rus");
	do {printf("\n|------------------------------------|\n\n");
	printf("1. Создать файл.\n");
	printf("2. Вывести файл.\n");
	printf("3. Создать файл со студентами с повышенной стипендией.\n");
	printf("4. Записать студентов с повышенной стипендией по группе в конец исх. файла.\n");
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
	ST *stud;
	char c;

	g = fopen("spisok1.dat", "wb");

	printf("\nВведите кол-во студентов: ");
	scanf_s("%d", &a);
	while((c = getchar()) != '\n' && c != EOF);
	stud = (ST *)malloc(sizeof(ST)*a);

	for (i=0; i<a; i++){
		printf("\nВведите фамилию студента: ");
		gets((stud+i)->N);
		printf("\nВведите группу студента: ");
		gets((stud+i)->GR);
		printf("\nВведите стипендию: ");
		scanf_s("%d", &(stud+i)->STIP);
		while((c = getchar()) != '\n' && c != EOF);
		fwrite(&stud[i], sizeof(ST), 1, g);
	}
	fclose(g);
	free(stud);
}

void output_file(FILE * g){
	int i, option = 0;
	char c;
	ST *stud;

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
					stud = (ST *)malloc(sizeof(ST)*a);
					printf("\n|--Фамилия---Группа---Стипа--|\n");
					for (i=0; i<a; i++){
						fread(&stud[i], sizeof(ST), 1, g);
					}
					for (i=0; i<a; i++){
						printf("%s\t%s\t%d\t\n", (stud+i)->N, (stud+i)->GR, (stud+i)->STIP);
					}
					free(stud);
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
					stud = (ST *)malloc(sizeof(ST)*aN);
					printf("\n|--Фамилия---Группа---Стипа--|\n");
					for (i=0; i<aN; i++){
						fread(&stud[i], sizeof(ST), 1, g);
					}
					for (i=0; i<aN; i++){
						printf("%s\t%s\t%d\t\n", (stud+i)->N, (stud+i)->GR, (stud+i)->STIP);
					}
					free(stud);
					fclose(g);
					_getch();
				}
				break;
			case 3:
				break;
		}
	} while (option != 3);
}

void createnew(FILE * g){
	int i, d=0;
	float srStip = 0;
	ST *stud;
	FILE * f;

	if ((g = fopen("spisok1.dat", "rb")) == NULL || a == 0){
		printf("\nФайл не существует или кол-во студентов не задано.\n");
	} else {
		f = fopen("spisok2.dat", "wb");
		stud = (ST *)malloc(sizeof(ST)*a);
		for (i=0; i<a; i++){
			read_n(g, i, stud);
			//printf("%s\t%s\t%d\t\n", stud->N, stud->GR, stud->STIP);
			srStip = srStip + stud[0].STIP;
		}
		//printf("первая - %f", srStip);
		srStip = srStip/a;
		//printf("вторая - %f", srStip);
		rewind(g);
		for (i=0; i<a; i++){
			read_n(g, i, stud);
			if (stud[0].STIP > srStip){
				write_n(f, d, stud);
				d++;
			}
		}
		aN=d;
		free(stud);
		fclose(f);
		fclose(g);
		printf("Выполнено!\n");
	}
}

void addObsh(FILE * g){
	int i, j, m=0, l=0, k=0, d=1, uniqOcc[100];
	char uniqGRUP[100][20] = {0};
	ST *stud;
	float *srStip;

	if ((g = fopen("spisok1.dat", "rb+")) == NULL || a == 0){
		printf("\nФайл не существует или кол-во студентов не задано.\n");
	} else {
		stud = (ST *)malloc(sizeof(ST)*a);
		for (i=0; i<a; i++){
			read_n(g, i, stud);
			for (j=0; j<a; j++){
				if (strcmp(uniqGRUP[j], stud->GR) == 0) l++;
			}
			if (l == 0){
				strcpy(uniqGRUP[m], stud->GR);
				//printf("Группа: %s\n", uniqGRUP[m]);
				m++;
			}
			l=0;
		}
		rewind(g);
		for (i=0; i<m; i++){
			for (j=0; j<a; j++){
				read_n(g, j, stud);
				if (strcmp(uniqGRUP[i], stud->GR) == 0) k++;
			}
			uniqOcc[i] = k;
			//printf("В группе %s %d человек.\n", uniqGRUP[i], uniqOcc[i]);
			k=0;
		}
		rewind(g);
		srStip = (float *)malloc(sizeof(float)*m);
		for (i=0; i<m; i++){
			srStip[i] = 0;
		}
		for (i=0; i<a; i++){
			read_n(g, i, stud);
			for (j=0; j<m; j++){
				if (strcmp(stud[0].GR, uniqGRUP[j]) == 0){
					srStip[j] = srStip[j] + stud[0].STIP;
					//printf("первая для %d - %f", j, srStip[j]);
				}
			}
		}
		for (i=0; i<m; i++){
			srStip[i] = srStip[i]/uniqOcc[i];
			//printf("первая для %d - %f", i, srStip[i]);
		}
		rewind(g);
		for (i=0; i<a; i++){
			read_n(g, i, stud);
			for (j=0; j<m; j++){
				if (strcmp(stud[0].GR, uniqGRUP[j]) == 0 && (float)stud[0].STIP >= srStip[j]){
					write_n(g,a+d-1,stud);
					d++;
				}
			}
		}
		a=a+d-1;
		free(stud);
		free(srStip);
		fclose(g);
		printf("Выполнено!\n");
	}
}

void read_n(FILE * g, int n, ST * p){
	fseek(g, n*sizeof(ST), SEEK_SET);
	fread(p, sizeof(ST), 1, g);
}

void write_n(FILE * g, int n, ST * p){
	fseek(g, n*sizeof(ST), SEEK_SET);
	fwrite(p, sizeof(ST), 1, g);
}
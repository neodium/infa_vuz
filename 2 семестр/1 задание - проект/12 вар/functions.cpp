#include "stdafx.h"
#include "header.h"
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int a;

int menu(){
	system("cls");
	int option = 0, k = 0;
	setlocale(LC_ALL, "rus");
	do {printf("\n|------------------------------------|\n\n");
	printf("1. Создать файл.\n");
	printf("2. Вывести файл.\n");
	printf("3. Поиск и добавление.\n");
	printf("4. Поиск и удаление.\n");
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
	B *bagaj;
	char c;

	g = fopen("spisok.dat", "wb");

	printf("\nВведите кол-во пассажиров: ");
	scanf_s("%d", &a);
	while((c = getchar()) != '\n' && c != EOF);
	bagaj = (B *)malloc(sizeof(B)*a);

	for (i=0; i<a; i++){
		printf("\nВведите ФИО пассажира: ");
		gets((bagaj+i)->N);
		printf("\nВведите кол-во вещей: ");
		scanf_s("%d", &(bagaj+i)->M);
		while((c = getchar()) != '\n' && c != EOF);
		printf("\nВведите общий вес вещей: ");
		scanf_s("%lf", &(bagaj+i)->W);
		while((c = getchar()) != '\n' && c != EOF);
		fwrite(&bagaj[i], sizeof(B), 1, g);
	}
	fclose(g);
	free(bagaj);
}

void output_file(FILE * g){
	int i;
	B *bagaj;
	bagaj = (B *)malloc(sizeof(B)*a);
	
	if ((g = fopen("spisok.dat", "rb")) == NULL || a == 0){
		printf("\nФайл не существует или кол-во пассажиров не задано.\n");
	} else {
		system("cls");
		printf("\n|--ФИО---Кол-во---Вес--|\n");
		for (i=0; i<a; i++){
			read_n(g, i, bagaj);
			printf("%s\t%d\t%lf\t\n", bagaj->N, bagaj->M, bagaj->W);
		}
		fclose(g);
	}
	free(bagaj);
}

void searchandadd(FILE * g){
	int i, j, d=0, c1=0, c2=0, k1=1, k2=1, srItems = 0, maxItems=0, maxItems_i[100]={0}, maxWeight_i[100]={0}, endResult[100]={0};
	double srWeight = 0, maxWeight=0;
	B *bagaj;
	
	if ((g = fopen("spisok.dat", "rb+")) == NULL || a == 0){
		printf("\nФайл не существует или кол-во пассажиров не задано.\n");
	} else {
		bagaj = (B *)malloc(sizeof(B)*a);
		for (i=0; i<a; i++){
			read_n(g, i, bagaj);
			srItems = srItems + bagaj[0].M;
			srWeight = srWeight + bagaj[0].W;
		}
		rewind(g);
		srItems = srItems/a;
		srWeight = srWeight/a;
		for (i=0; i<a; i++){
			read_n(g, i, bagaj);
			if (bagaj[0].M > maxItems && bagaj[0].M != srItems){
				maxItems = bagaj[0].M;
				maxItems_i[0] = i;
				c1++;
			}
			if (bagaj[0].W > maxWeight && bagaj[0].W != srWeight){
				maxWeight = bagaj[0].W;
				maxWeight_i[0] = i;
				c2++;
			}
		}
		rewind(g);
		for (i=0; i<a; i++){
			read_n(g, i, bagaj);
			if (bagaj[0].M == maxItems && i != maxItems_i[0]){
				maxItems_i[k1] = i;
				k1++;
			}
			if (bagaj[0].W == maxWeight && i != maxWeight_i[0]){
				maxWeight_i[k2] = i;
				k2++;
			}
		}
		rewind(g);
		for (i=0; i<k1; i++){
			for (j=0; j<k2; j++){
				if (maxItems_i[i] == maxWeight_i[j]){
					endResult[d]=maxItems_i[i];
					d++;
				}
			}
		}
		if (d != 0 && c1 != 0 && c2 != 0) {
			j=0;
			for (i=a;i<a+d;i++){
				read_n(g, endResult[j], bagaj);
				write_n(g, i, bagaj);
				j++;
			}
			a=a+d;
			printf("Выполнено!\n");
		}  else printf("Пассажиров и с наиб. кол-вом вещей, и с наиб. общим весом не существует.\n");
		fclose(g);
		free(bagaj);
	}
}

void searchandremove(FILE * g){
	int i, j, k=0, d=0, check=0, srWeight=0, toRemove[100];
	B *bagaj;
	FILE *f;
	
	if ((g = fopen("spisok.dat", "rb+")) == NULL || a == 0){
		printf("\nФайл не существует или кол-во пассажиров не задано.\n");
	} else {
		bagaj = (B *)malloc(sizeof(B)*a);
		for (i=0; i<a; i++){
			read_n(g, i, bagaj);
			srWeight = srWeight + bagaj[0].W;
		}
		srWeight = srWeight/a;
		rewind(g);
		for (i=0; i<a; i++){
			read_n(g, i, bagaj);
			if (bagaj[0].W > srWeight){
				toRemove[k] = i;
				k++;
			}
		}
		rewind(g);
		f = fopen("buffer.dat", "wb");
		for (j=0; j<a; j++){
			read_n(g, j, bagaj);
			write_n(f, j, bagaj);
		}
		fclose(f);
		if (k != 0){
			f = fopen("buffer.dat", "rb");
			for (i=0;i<a;i++){
				for (j=0;j<k;j++){
					if (i == toRemove[j]){
						check = 1;
					}
				}
				read_n(f, i, bagaj);
				if (check == 0){
					write_n(g, d, bagaj);
					d++;
				}
				check = 0;
			}
			fclose(f);
			a = a-k;
			printf("Выполнено!\n");
		} else printf("Пассажиров с весом больше среднего не существует.\n");
		fclose(g);
		free(bagaj);
	}
}

void read_n(FILE * g, int n, B * p){
	fseek(g, n*sizeof(B), SEEK_SET);
	fread(p, sizeof(B), 1, g);
}

void write_n(FILE * g, int n, B * p){
	fseek(g, n*sizeof(B), SEEK_SET);
	fwrite(p, sizeof(B), 1, g);
}
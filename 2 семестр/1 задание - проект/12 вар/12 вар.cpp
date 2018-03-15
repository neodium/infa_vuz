#include "stdafx.h"
#include "header.h"
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int k = 0;
	setlocale(LC_ALL, "rus");
	FILE * f = NULL;

	while(!k){
		switch(menu()){
		case 1: create_file(f);
				_getch();
				break;
		case 2: output_file(f);
				_getch();
				break;
		case 3: searchandadd(f);
				_getch();
				break;
		case 4: searchandremove(f);
				_getch();
				break;
		case 5: k=6;
				break;
		}
	}
	return 0;
}

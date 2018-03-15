#ifndef HEADER_H
#define HEADER_H

extern int a;

struct B {char N[20]; int M; double W;};

int menu();
void create_file(FILE * g);
void output_file(FILE * g);
void searchandadd(FILE * g);
void searchandremove(FILE * g);
void read_n(FILE * g, int n, B * p);
void write_n(FILE * g, int n, B * p);


#endif
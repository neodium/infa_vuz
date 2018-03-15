#ifndef HEADER_H
#define HEADER_H

extern int a;

struct AK {char N[20]; int M; double W;};

int menu();
void create_file(FILE * g);
void output_file(FILE * g);
void searchandadd1(FILE * g);
void searchandadd2(FILE * g);
void read_n(FILE * g, int n, AK * p);
void write_n(FILE * g, int n, AK * p);

#endif
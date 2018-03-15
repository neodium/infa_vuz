#ifndef HEADER_H
#define HEADER_H

extern int a;
extern int aN;

struct RR {char N[20]; int ROST; char GRUP[6];};

int menu();
void create_file(FILE * g);
void output_file(FILE * g);
void searchandcreate(FILE * g);
void addObsh(FILE * g);
void read_n(FILE * g, int n, RR * p);
void write_n(FILE * g, int n, RR * p);


#endif
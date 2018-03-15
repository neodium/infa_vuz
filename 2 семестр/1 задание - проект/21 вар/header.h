#ifndef HEADER_H
#define HEADER_H

extern int a;
extern int aN;

struct ST {char N[20]; char GR[20]; int STIP;};

int menu();
void create_file(FILE * g);
void output_file(FILE * g);
void createnew(FILE * g);
void addObsh(FILE * g);
void read_n(FILE * g, int n, ST * p);
void write_n(FILE * g, int n, ST * p);


#endif
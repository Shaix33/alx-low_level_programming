#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);

#endif

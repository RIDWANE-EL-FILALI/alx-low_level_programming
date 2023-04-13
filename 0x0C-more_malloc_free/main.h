#ifndef MAIN_H
# define MAIN_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))

int _putchar(char c);
int len(char *str);
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);

#endif /*MAIN_H*/

#ifndef _MAIN_H_
#define _MAIN_H_

/* Library addition */
#include <stdio.h>

/* _putchar.c */
int _putchar(char c);

/* Mandatory tasks prototypes */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Task 0 additional prototypes */
int _strlen(const char *s);
int power(int base, int exp);

/* Advanced tasks prototypes */
int get_endianness(void);

#endif /* end of MAIN_H file */

#ifndef MAIN_H
#define MAIN_H
#define SIZE 1024
#include <stdio.h>
#include <unistd.h>

int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);

#endif /* MAIN_H */

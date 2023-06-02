#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void hande_conversion(const char * const format, ...);
void bin(unsigned int num);
int toint(char str[]);
void tostring(char str[], int num);
int print_int(int number);
int print_integer(int arg);
void tu_u(unsigned int n);
int to_hexa( unsigned int num);
void to_octal(long dec);
int find_pointer(void *ptr);
#endif

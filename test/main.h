#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
void hande_conversion(const char * const format, ...);
void bin(unsigned int num);
int print_integer(int arg);
void tu_u(unsigned int n);
int to_hexa( unsigned int num);
void to_octal(long dec);
void printString(const char *str);
#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
void hande_conversion(const char * const format, ...);
void bin(unsigned int num);
int print_integer(int arg, int precision);
void tu_u(unsigned int n, int precision);
int to_hexa( unsigned int num, int precision);
void to_octal(long dec, int precision);
void printString(const char *str, int precision);
#endif

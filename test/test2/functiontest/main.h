#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
void to_hexa(unsigned int num, int precision, int width, char paddingCount, int zeroFlag);
void to_octal(long dec, int precision, int width, char padding_char, int zeroFlag);
int print_integer(int arg, int precision, int width, char padding_char,int zeroFlag);
void tu_u(unsigned int n, int precision, int width, char paddingChar, int zeroflag);
void printString(const char *str, int precision, int width, char paddingChar, int zeroflag);
void bin(unsigned int num, int precision, int width, char paddingChar, int zeroflag);
int print_int(unsigned int arg, int zeroFlag, int width, int precision);

#endif

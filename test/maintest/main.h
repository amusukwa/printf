#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int number);
void tu_u(unsigned int n, int precision);
int find_pointer(void *ptr);
/**void bin(unsigned int num);*/
int print_integer(int arg, int precision);
void to_octal(long dec, int precision);
int to_hexa(unsigned int num, int precision);
void printString(const char *str,  int precision);
void bin(unsigned int num __attribute__((unused)), int precision __attribute__((unused)), int width, char paddingChar, int zeroFlag)
#endif

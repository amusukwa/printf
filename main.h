#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
int print_int(int number);
int find_pointer(void *ptr);
int print_string(const char *str);
int _putchar(char c);
int putstr(char *string);
int _printf(const char *format, ...);
#endif

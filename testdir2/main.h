#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#define UNUSED(x) (void)(x)
#define F_MINUS 1


int print_int(int number);
int find_pointer(void *ptr);
int print_string(const char *str);
int _putchar(char c);
int putstr(char *string);
int _printf(const char *format, ...);
int print_binary(int number);
int printBin(unsigned int num, char buffer[], int flags, int width, int precision, int size);
int printstring(int str_length, char buffer[], int flags, int width, int precision, int size);

#endif

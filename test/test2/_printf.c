#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
* _printf - prints out characters
* @format: containst format specifiers
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
int n = 0;
char *str;
int width, i;
int precision = -1;
char paddingChar = ' ';
int zeroFlag = 0;
va_list args;
va_start(args, format);

if (format == NULL)
return (-1);
while (*format)
{
if (*format == '%')
{
format++;

if (*format == '.')
{
format++;
precision = 0;
while (*format >= '0' && *format <= '9')
{
precision = precision * 10 + (*format - '0');
format++;
}
width = 0;
zeroFlag = 0;

if (*format >= '0' && *format <= '9')
{
width = 0;
while (*format >= '0' && *format <= '9')
{
width = width * 10 + (*format - '0');
format++;
}
}
if (*format == '0')
{
zeroFlag = 1;
format++;
}           

}
switch (*format)
{
case 'c':
if (width > 1)
{
for (i = 1; i < width; i++)
n += _putchar(' ');
}		
n += _putchar(va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
if (width > 0)
{
int len = 0;
char *temp = str;
while (*temp)
{
len++;
temp++;
}
if (len < width)
{
for (i = len; i < width; i++)
n += _putchar(' ');
}
}
while (*str)
{
n += _putchar(*str);
str++;
}
break;
case '%':
n += _putchar('%');
break;
case 'd':
print_integer(va_arg(args, int), precision, width, paddingChar, zeroFlag);
break;
case 'i':
print_integer(va_arg(args, int), precision, width, paddingChar, zeroFlag);
break;
case 'b':
bin(va_arg(args, int), precision, width, paddingChar, zeroFlag);
break;
case 'u':
tu_u(va_arg(args, unsigned int), precision,width, paddingChar, zeroFlag);
break;
case 'o':
to_octal(va_arg(args, long int), precision, width, paddingChar, zeroFlag);
break;
case 'x':
to_hexa(va_arg(args, unsigned int), precision, width, paddingChar, zeroFlag);
break;
case 'X':
to_hexa(va_arg(args, unsigned int), precision, width, paddingChar, zeroFlag);		
break;
case 'S':
str = va_arg(args, char *);
printString(str, precision, width, paddingChar, zeroFlag);
default:
break;
}
}
else
{
n += _putchar(*format);
}
format++;
}
va_end(args);
return (n);
}

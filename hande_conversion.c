#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i, d, n, len, f, digit;

i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (i < len && f == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);

return (n);
}
/**
 * _putchar - prints character
 * @c: character c
 * Return: 1 if successful -1 on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * hande_conversion -  handles conversion specifier 
 * @format:list of all types of arguments
 * @..: rest of arguments
 * Return:no return type
 */
void hande_conversion(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'i':
_putchar(va_arg(list, int);
break;
case 'd':
_putchar(va_arg(list, double);
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
for (str = va_arg(list, char *); *str; str++)
_putchar(*str);
break;
default:
i++;
continue;
}
sep = ",";
i++;
}
}
printf("\n");
va_end(list);
}

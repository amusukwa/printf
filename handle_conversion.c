clude "main.h"
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
 * change_decimal -  converts to decimal
 * @char:input parameter
 * Return:return integer
 */
int change_decimal(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
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
 * _hande_conversion -  prints all things
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
case 'c':
_putchar(va_arg(list, int));
break;
case 'i':
str = va_arg(list, char *);
if (str)
_atoi(str);
for (str = va_arg(args, char *); *str; str+++)
_putchar(*str);
else
_putchar(',');
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
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
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                  

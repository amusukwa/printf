#include <stdarg.h>
#include "main.h"
#include <unistd.h>
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
 * print_integer - prints integer
 * @formatstr:input string
 * @...:list of arguments
 * Return: integer
 */
int print_integer(const char *formatstr, ...)
{
va_list args;
int arg, divisor;
char *str;
va_start(args, formatstr);
while (*formatstr)
{
if (*formatstr == '%')
{
formatstr++;
switch (*formatstr)
{
case 'd':
arg = va_arg(args, int);
for (str = va_arg(args, char *); *str; str++)
_putchar(*str);
if (arg < 0)
{
putchar('-');
arg = -arg;
}
divisor = 1;
while (arg / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
int digit = arg / divisor;
_putchar('0' + digit);
arg %= divisor /= 10;
}
break;
default:
break;
}
}
else
{
_putchar(*formatstr);
}
formatstr++;
}
va_end(args);
return (0);
}

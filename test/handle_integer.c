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
 * @arg:input string
 * @...:list of arguments
 * Return: integer
 */
int print_integer(int arg)
{
int divisor;
if (arg >= 0)
{
_putchar(' ');
_putchar('+');
}
else
{
_putchar('-');
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
arg %= divisor;
divisor /= 10;
}
return (0);
}

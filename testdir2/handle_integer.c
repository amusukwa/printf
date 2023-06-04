#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/**
 * print_int - prints integer
 * @number: input number
 * Return: count of charaters
 */
int print_int(int number)
{
int i, n, d;

n = 0;

if (number < 0)
{
_putchar('-');
n++;
number = -number;
}
i = 1;
while ((number / i) > 9)
{
i *= 10;
}
while (i > 0)
{
d = number / i;
_putchar ('0' + d);
n++;
number %= i;
i /= 10;
}
return (n);
}

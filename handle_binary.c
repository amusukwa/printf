
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/**
 * print_binary - prints a binary number
 * @number: input number
 * Return: count of charaters
 */
int print_binary(int number)
{
int i, n, bit;

n = 0;

if (number < 0)
{
_putchar('-');
n++;
number = -number;
}

if (number == 0)
{
_putchar('0');
n++;
return (n);
}

for (i = 31; i >= 0; i--)
{
if ((number >> i) & 1)
break;
}
for (; i >= 0; i--)
{
bit = (number >> i) & 1;
_putchar('0' + bit);
n++;
}
return (n);
}





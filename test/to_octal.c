#include "main.h"
#include <stdio.h>

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
 * to_octal - converts to octal
 * @dec:input parameter
 * Return: no return type
 */

void to_octal(long dec)
{
long remainder, quotient = 0;
int octalNumber[100], i = 1, j;
quotient = dec;

while (quotient != 0)
{
octalNumber[i++] = quotient % 8;
quotient = quotient / 8;
}
for (j = i - 1; j > 0; j--)
{
_putchar('0' + octalNumber[j]);
}
_ putchar('\n');
}

#include <unistd.h>
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
 * to_hexa - converts to hexadecimal
 * @num:input parameter
 * Return:integer
 */
int to_hexa(unsigned int num)
{
unsigned int hex = 0xF0000000;
int shift = 28;

while (shift >= 0)
{
unsigned int digit = (num & hex) >> shift;
if (digit < 10)
_putchar(digit + '0');
else
_putchar(digit - 10 + 'A');
hex >>= 4;
shift -= 4;

_putchar('\n');
return (0);
}


#include "main.h"
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
 * printString - handles printing of S format
 * @str: input character
 * Return:
 */
void printString(const char *str)
{
const unsigned char *ptr = (const unsigned char *)str;
_putchar(#);
while (*ptr != '\0')
{
if (*ptr < 32 || *ptr >= 127)
_putchar('\\');
_putchar('x');
_putchar("0123456789ABCDEF"[(*ptr >> 4) & 0x0F]);
_putchar("0123456789ABCDEF"[*ptr & 0x0F]);
}
else
{
putchar(*ptr);
}
ptr++;
}


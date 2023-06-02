#include "main.h"
#include <stdlib.h>
/**
 * print_string - prints string
 * @str: string to be printed
 * Return: number of characters printed
 */
int print_string(const char *str)
{
	int n;
	int i = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 32 && str[n] < 127)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			_putchar("0123456789ABCDEF"[(unsigned char)str[n] / 16]);
			_putchar("0123456789ABCDEF"[(unsigned char)str[n] % 16]);
			i += 4;
		}
		i++;
	}
	return (i);
}

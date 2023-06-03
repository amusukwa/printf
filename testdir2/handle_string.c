#include "main.h"
#include <stdlib.h>
/**
 * print_string - prints string
 * @str: string to be printed
 * Return: number of characters printed
 */
int print_string(const char *str)
{
	int i;
	int n = 0;

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			_putchar(str[i]);
			n++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			_putchar("0123456789ABCDEF"[(unsigned char)str[n] / 16]);
			_putchar("0123456789ABCDEF"[(unsigned char)str[n] % 16]);
			n += 4;
		}
		n++;
	}
	return (n);
}

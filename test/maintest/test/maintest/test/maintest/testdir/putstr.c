#include "main.h"
/**
 * putstr - prints a string
 * @string - string to be printed
 * Return: number of characters printed
 */
int putstr(char *string)
{
	int i, n;

	i = 0;
	n = 0;

	if (string)
	{
		while (string[i] != '\0')
		{
			_putchar(string[i]);
			i++;
			n += 1;
		}

	}
	return (n);
}

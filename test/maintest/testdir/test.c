#include "main.h"
#include <stdarg.h>

/**
 * find_pointer - finds pointer
 * @ptr: inputs pointer
 * Return: number of characters printed
 */
int find_pointer(char str[])
{
        int n, i, digit;
	va_list args;
	void *ptr = va_arg(args, void *);
        unsigned long number;
	number = (unsigned long) ptr;

	if (ptr == NULL)
		return (-1);

        n = 2;
        i = 15;

        str[i] = '\0';

        while (number != 0 && i >= 0)
        {
                digit = number & 0xF;
                str[--i] = digit < 10 ? digit + '0' : digit - 10 + 'A';
                number >>= 4;
        }
        _putchar('0');
        _putchar('x');
        while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		n++;
	}
        return (n);
}

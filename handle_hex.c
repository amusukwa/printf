#include "main.h"
/**
 * print_octal - prints octal value
 * @number: number inputs
 * Return: number of characters printed
 */
int print_octal(unsigned int number)
{
	int n = 0;

	if (number >= 8)
	{
		n += print_octal(number / 8);
	}
	_putchar('0' + (number % 8));
	n++;
	return (n);
}
/**
 * print_unsigned - prints unsigned value
 * @number: number inputs
 * Return: number of characters printed
 */
int print_unsigned(unsigned int number)
{
        int n = 0;

        if (number >= 10)
        {
                n += print_unsigned(number / 10);
        }
	_putchar('0' + (number % 10));
        n++;
	return (n);
}
/**
 * print_upperhex - prints upper hex value
 * @number: number inputs
 * Return: number of characters printed
 */
int print_upperhex(unsigned int number)
{
        int n = 0;

	const char *values = "0123456789ABCDEF";

        if (number >= 16)
        {
                n += print_upperhex(number / 16);
        }
        _putchar(values[number % 16]);
        n++;
        return (n);
}
/**
 * print_lowerhex - prints lower hex value
 * @number: number inputs
 * Return: number of characters printed
 */
int print_lowerhex(unsigned int number)
{
        int n = 0;

        const char *values = "0123456789abcdef";

        if (number >= 16)
        {
                n += print_upperhex(number / 16);
        }
        _putchar(values[number % 16]);
        n++;
        return (n);
}

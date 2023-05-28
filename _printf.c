#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints out characters
 * @format: containst format specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int n = 0;
	char *str;

	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					n += _putchar(va_arg(args, int));
					break;
				case 's':
					for (str = va_arg(args, char *); *str; str++)
						n += _putchar(*str);
					break;
				case '%':
					n += _putchar('%');
					break;
				default:
					break;
			}
		}
		else
		{
			n += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (n);
}


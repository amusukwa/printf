#include "main.h"
#include <stdarg.h>
#include <unistd.h>
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

	if (format == NULL)
		return (-1);

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
				case 'd':
					n += print_int(va_arg(args, int));
					break;
				case 'i':
					n += print_int(va_arg(args, int));
					break;
				case 'p':
					n += find_pointer(va_arg(args, void *));
					break;
				case 'S':
					n += print_string(va_arg(args, const char *));
					break;
				case 'u':
					n += print_unsigned(va_arg(args, int));
					break;
				case 'x':
					n += print_lowerhex(va_arg(args, int));
					break;
				case 'o':
					n += print_octal(va_arg(args, int));
					break;
				case 'X':
					n += print_upperhex(va_arg(args, int));
					break;
				case 'b':
					n += print_binary(va_arg(args, int));
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

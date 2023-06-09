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
      /** int precision = 0;
       int width = 0;
       int flags = 0;*/



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
					str = va_arg(args, char *);
                                        if (str == NULL)
                                        str = "(null)";
                                         n += printstring(str, 0, 0, 0);
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
				case 'b':
				  n += printBin(va_arg(args, unsigned int), NULL, 0, 0, 0, 0);
				 break;

				default:
                       		      n += _putchar('%');
				      n += _putchar(*format);                  		      
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

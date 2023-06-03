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

	for (int i = 0; format[i] != '\0'; i++) 
	{
        if (format[i] == '%') {
            i++; 
            int width = 0;
            int precision = 0;
            int zeroFlag = 0;
	    char paddingChar = '';
            
            if (format[i] >= '0' && format[i] <= '9')
	    {
                width = format[i] - '0';
                i++;
            }

            if (format[i] == '.')
	    {
                i++;
                if (format[i] >= '0' && format[i] <= '9')
	       	{
                    precision = format[i] - '0';
                    i++;
                }
            }

            if (format[i] == '0')
	    {
                zeroFlag = 1;
                i++;
            }


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
				case 'i':
					n = va_arg(args, unsigned int);
					void tu_u( n, precision, width, paddingChar, zeroFlag)

					break;
				/**case 'i':
					n += print_int(va_arg(args, int));
					break;
				case 'p':
					n += find_pointer(va_arg(args, void *));
					break;*/
				default:
					break;
			}
		}
		else
		{
	  _putchar(format[i]); 
            printed_chars++;
		}
		}
	va_end(args);
	return (n);
}

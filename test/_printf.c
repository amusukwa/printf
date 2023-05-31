#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - prints out characters
 * @format: containst format specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int n = 0;
	char *str;
	int width;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format >= '0' && *format <= '9')
		       	{
				width = 0;
				while (*format >= '0' && *format <= '9') {
                    	width = width * 10 + (*format - '0');
                    	format++;
                }
			}
		       	else
		       	{
                width = 0; 
            }
			switch (*format)
			{
				case 'c':
					  if (width > 1)
					  {
                       				 for (int i = 1; i < width; i++)
                           			 n += _putchar(' ');
                    			  }		
					n += _putchar(va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
                        		str = "(null)";
					if (width > 0) {
                     			   int len = 0;
                        		char *temp = str;
                        		while (*temp)
                        		{
                            		len++;
                           		 temp++;
                        		}
                        		if (len < width)
					{
                            		for (int i = len; i < width; i++)
                                	n += _putchar(' ');
                        		}
                    			}
					while (*str)
                   			 {
                        			n += _putchar(*str);
                        			str++;
                    			}
					break;
				case '%':
					n += _putchar('%');
					break;
				case 'd':
					 n +=_putchar(va_arg(args, int));
					 break;
				case 'i':
					  print_integer(va_arg(args, int));
					 break;
			
				case 'b':
					 bin(va_arg(args, int));
					 break;
				case 'u':
					tu_u(va_arg(args, unsigned int));
		       			break;
				case 'o':
					to_octal(va_arg(args, long int));
					break;
				case 'x':
					to_hexa(va_arg(args, unsigned int));
					break;
				case 'X':
					to_hexa(va_arg(args, unsigned int));		
					break;
				case 'S':
					 str = va_arg(args, char *);
					printString(str);		
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

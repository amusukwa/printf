#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - prints character
 * @c: character c
 * Return: 1 if successful -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * bin2 - prints binary
 * @num:input parameter
 * Return:no return type
 */
 void bin2(unsigned int num)
  {
   char result[sizeof(num)*8];
        int count = 0;
        while(num)
        {
                result[count++] = (((num & 1) == 1) ? '1' : '0');
                num>>=1;
        }
        if(count)
        {
                count--;
                while(count>=0)
                {
                        _putchar(result[count--]);
                }
        }
        else
        {
                _putchar('0');
        }
        _putchar('\n');
}

/**
 * bin - prints binary
 * @num:input parameter
 * Return:no return type
 */
void bin(unsigned int num)
{
        if(!num) return;

        bin2(num>>1);
        _putchar((((num & 1) == 1) ? '1' : '0'));
}

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
					 n +=_putchar(va_arg(args, int));
					 break;
				case 'i':
			
				case 'b':
					 bin(va_arg(args, int));
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

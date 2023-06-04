#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - prints out characters
 * @format: containst format specifiers
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
  int n = 0;
  char *str;
  int width = 0;
  int precision = -1;
/** char paddingChar = ' ';*/
  int zeroFlag = 0;
  va_list args;
  va_start(args, format);

  if (format == NULL)
    return (-1);

  while (*format)
  {
    if (*format == '%')
    {
      format++;

      if (*format == '.')
      {

      switch (*format)
      {
        case 'c':
          n += _putchar(va_arg(args, int));
          break;
        case 's':
          str = va_arg(args, char *);
          if (str == NULL)
            str = "(null)";
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
	   print_int(va_arg(args,unsigned int), zeroFlag,  width, precision);
          break;
        /**  break;
	case 'd':
	  print_integer(va_arg(args, int), precision, width, paddingChar, zeroFlag);
	  break;*/
        default:
          n += _putchar(*format);
          break;
      }
    }
    else
    {
      n += _putchar(*format);
    }
    format++;
    if (*format == '\0')
    break;
  }

  va_end(args);
  return (n);
}
}


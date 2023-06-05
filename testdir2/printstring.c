#include "main.h"
#include <unistd.h>
/**
 * printstring - prints string
 * @str_legth: Unsigned number to print
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width specification
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
nt print_string(const char *str, int flags, int width, int precision, int size)
{
    int length = 0, i;

    if (str == NULL)
        str = "(null)";

    while (str[length] != '\0')
        length++;

    if (precision >= 0 && precision < length)
        length = precision;

    if (width > length)
    {
        if (flags & F_MINUS)
        {
            write(1, str, length);
            for (i = width - length; i > 0; i--)
                write(1, " ", 1);
            return width;
        }
        else
        {
            for (i = width - length; i > 0; i--)
                write(1, " ", 1);
            write(1, str, length);
            return width;
        }
    }

    return write(1, str, length);
}


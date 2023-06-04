#include "main.h"
#include <stdarg.h>
/**
 * find_pointer - finds pointer
 * @ptr: inputs pointer
 * Return: number of characters printed
 */
int find_pointer(void *ptr)
{
        int n, i, digit;
        char str[17];
        unsigned long long number;

        number = (unsigned long long) ptr;
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
                _putchar(str[i++]);
                n++;
        }
        return (n);
}

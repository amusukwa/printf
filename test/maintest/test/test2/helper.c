#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: Character to print out
 *
 * Return: 1 Always (Success)
 *
 * On error -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * print_int - prints integer
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return:integer
 */

int print_int(unsigned int arg, int zeroFlag, int width, int precision)
{
    int n = arg;
    int digit_count = 0;
    int paddingCount, i,index;
    int temp;
    int is_negative = 0;
    int leading_zeros;

    if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }

    if (n == 0)
        digit_count = 1;
    else
    {
        temp = n;
        while (temp != 0)
        {
            digit_count++;
            temp /= 10;
        }
    }
    if (precision > digit_count)
        digit_count = precision;

    paddingCount = width - digit_count;

    if (paddingCount > 0)
    {
        for (i = 0; i < paddingCount; i++)
            _putchar(' ');
    }

    if (is_negative)
        _putchar('-');

    if (zeroFlag && paddingCount > 0)
    {
        for (i = 0; i < paddingCount; i++)

            _putchar('0');
    }

     leading_zeros = precision - digit_count;
    for ( i = 0; i < leading_zeros; i++)
        _putchar('0');

    if (n == 0)
    {

            _putchar('0');
    }
    else
    {

        char* digits = (char*)malloc(digit_count * sizeof(char));
        if (digits == NULL)
        {

            return -1;
        }
        index = digit_count - 1;

        while (n != 0)
        {
            digits[index--] = '0' + (n % 10);
            n /= 10;
        }

        for (i = 0; i < digit_count; i++)
            _putchar(digits[i]);
    }

    return digit_count + paddingCount;
}



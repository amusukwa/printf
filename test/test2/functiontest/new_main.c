#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * print_int - Print int
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

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

/**int print_int(unsigned int arg, int zeroFlag, int width, int precision)
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
*/

 /**
 * to_octal - converts to octal
 * @dec:input parameter
 * Return: no return type
 */

int to_octal(long dec, int precision, int width, int zeroFlag)
{
long quotient = 0;
int octalNumber[100], i = 1, j, digit_count, paddingCount;
quotient = dec;

while (quotient != 0)
{
octalNumber[i++] = quotient % 8;
quotient = quotient / 8;
}
digit_count = i - 1;
if (precision > digit_count)
precision = digit_count;

paddingCount = width - digit_count;
if (paddingCount > 0 && zeroFlag)
{
_putchar('0');
paddingCount--;
}
while (paddingCount > 0)
{
paddingCount--;
}
for (j = digit_count; j > 0 && precision > 0; j--)
{
_putchar('0' + octalNumber[j]);
precision--;
}
_putchar('\n');
return (digit_count);
}

int main() {
	unsigned int ui,num;
 ui = (unsigned int)INT_MAX + 1024;	
    num = ui;
    int zeroFlag = 0;
    int width = 10;
    int precision = -1;
    int printed_chars;

    printed_chars = to_octal(num, precision, width, zeroFlag);

    printf("\nTotal characters printed: %d\n", printed_chars);

    return (0);
}

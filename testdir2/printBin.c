#include "main.h"
#include <unistd.h>

/**
 * printBin - Prints an unsigned number
 * @num: Unsigned number to print
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width specification
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int printBin(unsigned int num, char buffer[], int flags, int width, int precision, int size)
{
    unsigned int n, m, i, sum;
    unsigned int a[32];
    int count;
    char z;
    UNUSED(buffer);
    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);

    n = num;
    m = 2147483648; /* (2 ^ 31) */
    a[0] = n / m;
    for (i = 1; i < 32; i++)
    {
        m /= 2;
        a[i] = (n / m) % 2;
    }
    for (i = 0, sum = 0, count = 0; i < 32; i++)
    {
        sum += a[i];
        if (sum || i == 31)
        {
            z = '0' + a[i];
            write(1, &z, 1);
            count++;
        }
    }
    return count;
}




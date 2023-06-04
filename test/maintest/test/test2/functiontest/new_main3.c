#include <stdarg.h>
#include <unistd.h>
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
 * to_hexa - converts to hexadecimal
 * @num:input parameter
 * Return:integer
 */

void to_hexa(unsigned int num, int precision, int width, char paddingChar, int zeroFlag)
{
unsigned int hex = 0xF0000000;
int shift = 28, i = 1, digit_count, paddingCount;

while (shift >= 0)
{
unsigned int digit = (num & hex) >> shift;
if (digit < 10)
_putchar(digit + '0');
else
_putchar(digit - 10 + 'A');
hex >>= 4;
shift -= 4;
digit_count++;
digit_count = i - 1;
if (precision > digit_count)
break;
paddingCount = width - digit_count;
if (paddingCount > 0)
{
if (zeroFlag)
{
_putchar('0');
paddingCount--;
}
}
for (; paddingCount > 0; paddingCount--)
{
_putchar(paddingChar);
}
_putchar('\n');
}
}
int main() {
    unsigned int num = 255;
    int precision = -1;
    int width = 8;
    char paddingChar = ' ';
    int zeroFlag = 0;

    to_hexa(num, precision, width, paddingChar, zeroFlag);

    return 0;
}

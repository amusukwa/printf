
#include <stdio.h>
#include <limits.h>
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
 * printString - handles printing of S format
 * @str: input character
 * Return:
 */
void printString(const char *str,  int precision, int width, char paddingChar, int zeroFlag)
{
const unsigned char *ptr = (const unsigned char *)str;
int count = 0;
int paddingCount;

paddingCount = width - precision;
if (paddingCount > 0)
{
for (; paddingCount > 0; paddingCount--)
{
if (zeroFlag)
_putchar('0');
else
 _putchar(paddingChar);

}
}

while (*ptr != '\0' && count < precision && precision != width)
{
if (*ptr < 32 || *ptr >= 127)
{
_putchar('\\');
_putchar('x');
_putchar("0123456789ABCDEF"[(*ptr >> 4) & 0x0F]);
_putchar("0123456789ABCDEF"[*ptr & 0x0F]);
}
else
{
_putchar(*ptr);
}
ptr++;
count++;
}


int main() {
    const char *str = "Hello, World!";
    int precision = -1;
    int width = 20;
    char paddingChar = ' ';
    int zeroFlag = 0;

    printString(str, precision, width, paddingChar, zeroFlag);

    return 0;
}

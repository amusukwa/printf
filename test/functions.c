#include "main.h"
#include <unistd.h>
/**
 * tu_u - converts to unsigned decimal
 * @u:input parameter
 * Return:no return
 */
void tu_u(unsigned int n)
{
        if (n == 0) {
        putchar('0');
        return;
    }

    if (n / 10 > 0)
  tu_u(n / 10);

    _putchar(n % 10 + '0');
}
/**
 * print_integer - prints integer
 * @arg:input string
 * @...:list of arguments
 * Return: integer
 */
int print_integer(int arg)
{
int divisor;
if (arg >= 0)
{
_putchar(' ');
_putchar('+');
}
else
{
_putchar('-');
arg = -arg;
}
}

/**
 * to_octal - converts to octal
 * @dec:input parameter
 * Return: no return type
 */

void to_octal(long dec)
{
long remainder, quotient = 0;
int octalNumber[100], i = 1, j;
quotient = dec;

while (quotient != 0)
{
octalNumber[i++] = quotient % 8;
quotient = quotient / 8;
}
for (j = i - 1; j > 0; j--)
{
_putchar('0' + octalNumber[j]);
}
_putchar('\n');
}

/**
 * to_hexa - converts to hexadecimal
 * @num:input parameter
 * Return:integer
 */

int to_hexa(unsigned int num)
{
unsigned int hex = 0xF0000000;
int shift = 28;

while (shift >= 0)
{
unsigned int digit = (num & hex) >> shift;
if (digit < 10)
_putchar(digit + '0');
else
_putchar(digit - 10 + 'A');
hex >>= 4;
shift -= 4;
}
_putchar('\n');
}

/**
 * printString - handles printing of S format
 * @str: input character
 * Return:
 */
void printString(const char *str)
{

const unsigned char *ptr = (const unsigned char *)str;

while (*ptr != '\0')
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
}

}


/**
 * bin2 - prints binary
 * @num:input parameter
 * Return:no return type
 */
void bin2(unsigned int num)
{
char result[sizeof(num) * 8];
int count = 0;
while (num)
{
result[count++] = (((num & 1) == 1) ? '1' : '0');
num >> = 1;
}
if (count)
{
count--;
while (count >= 0)
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
if (!num)
return;
bin2(num >> 1);
_putchar((((num & 1) == 1) ? '1' : '0'));
}

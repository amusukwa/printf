#include "main.h"
#include <unistd.h>
/**
 * tu_u - converts to unsigned decimal
 * @u:input parameter
 * Return:no return
 */
void tu_u(unsigned int n, int precision)
{
if (n == 0) {
putchar('0');
return;
}

unsigned int temp = n;
int digitCount = 0;
while (temp > 0)
{
temp /= 10;
digitCount++;
}

if (precision > digitCount)
precision = digitCount;

if (n / 10 > 0 && precision > 0)
tu_u(n / 10, precision - 1);

_putchar(n % 10 + '0');
}
/**
 * print_integer - prints integer
 * @arg:input string
 * @...:list of arguments
 * Return: integer
 */
int print_integer(int arg, int precision)
{
int divisor;
 int digit_count = 0;
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

divisor = 1;
while (divisor <= arg / 10)
{
divisor *= 10;
}
while (divisor > 0)
{
int digit = (arg / divisor) % 10;
_putchar(digit + '0');
divisor /= 10;
digit_count++;

if (digit_count >= precision)
{
break;
}
}
return digit_count;

}

/**
 * to_octal - converts to octal
 * @dec:input parameter
 * Return: no return type
 */

void to_octal(long dec, int precision)
{
long remainder, quotient = 0;
int octalNumber[100], i = 1, j;
quotient = dec;

while (quotient != 0)
{
octalNumber[i++] = quotient % 8;
quotient = quotient / 8;
}

if (precision > i - 1)
precision = i - 1;

for (j = 1; j <= precision - (i - 1); j++)
{
putchar('0');
}

for (j = i - 1; j > 0 && precision > 0; j--)
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

int to_hexa(unsigned int num, int precision)
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

if (precision > 0)
precision--;
else
break;
}
_putchar('\n');
}

/**
 * printString - handles printing of S format
 * @str: input character
 * Return:
 */
void printString(const char *str,  int precision)
{

const unsigned char *ptr = (const unsigned char *)str;
int count = 0;

while (*ptr != '\0' && count < precision)
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
num >>= 1;
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
void bin(unsigned int num, int precision)
{
if (num == 0)
{
while (precision > 0)
{
_putchar('0');
precision--;
}
return;
}

if (!num && precision < 0)
return;
bin2(num >> 1, precision - 1);
_putchar((((num & 1) == 1) ? '1' : '0'));
}

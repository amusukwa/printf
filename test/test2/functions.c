#include "main.h"
#include <unistd.h>
/**
 * tu_u - converts to unsigned decimal
 * @u:input parameter
 * Return:no return
 */
void tu_u(unsigned int n, int precision, int width, char paddingChar, int zeroFlag)
{
unsigned int temp = n;
int digitCount = 0;
int i;
if (n == 0 && precision != 0)
{
_putchar('0');
}
else
{
for (i = 0; i < width; i++)
{
_putchar(paddingChar);
}
}
return;
 
while (temp > 0)
{
temp /= 10;
digitCount++;
}

if (precision > digitCount)
precision = digitCount;

if (n / 10 > 0 && precision > 0)
tu_u(n / 10, precision - 1,width, paddingChar, zeroFlag);
_putchar(n % 10 + '0');

if (digitCount < width)
{
int paddingCount = width - digitCount;
for (int i = 0; i < paddingCount; i++)
{
if (zeroFlag)
_putchar('0');
else
_putchar(paddingChar);
}
}
}
/**
 * print_integer - prints integer
 * @arg:input string
 * @...:list of arguments
 * Return: integer
 */
int print_integer(int arg, int precision, int width, char padding_char,int zeroFlag)
{
int divisor, digit, paddingCount;
int neg = 0;
int digit_count = 0;
if (arg >= 0)
neg = 1;
arg = -arg;

if (arg == 0)
{
digit_count++;
}
else
{
divisor = 1;
while (divisor <= arg / 10)
{
divisor *= 10;
}
while (divisor > 0)
{
digit = (arg / divisor) % 10;
_putchar(digit + '0');
divisor /= 10;
digit_count++;
if (digit_count >= precision)
{
break;
}
}
}
if (neg)
{
digit_count++;
}
paddingCount = width - digit_count;
if (paddingCount > 0)
{
if (zeroFlag && !neg) 
{
_putchar('+');
}
else if (neg)
{
_putchar('-');
}

while (paddingCount > 0)
{
_putchar(padding_char);
paddingCount--;
}
if (neg && !(zeroFlag && !neg))
{
_putchar('-');
}
else if (paddingCount == ' ')
{
_putchar('+');
}

return digit_count;
}
}

/**
 * to_octal - converts to octal
 * @dec:input parameter
 * Return: no return type
 */

void to_octal(long dec, int precision, int width, char padding_char, int zeroFlag)
{
long remainder, quotient = 0;
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
_putchar(padding_char);
paddingCount--;
}
for (j = digit_count; j > 0 && precision > 0; j--)
{
_putchar('0' + octalNumber[j]);
precision--;
}
_putchar('\n');
}

/**
 * to_hexa - converts to hexadecimal
 * @num:input parameter
 * Return:integer
 */

int to_hexa(unsigned int num, int precision, int width, char paddingChar, int zeroFlag)
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
void bin(unsigned int num, int precision, int width, char paddingChar, int zeroFlag)
{

int paddingCount = width - precision;
if (paddingCount > 0)
{
for (; paddingCount > 0; paddingCount--)
{
_putchar(paddingChar);
}
}
if (num == 0)
{
while (precision > 0 && precision != width)
{
_putchar('0');
precision--;
}
return;
}

if (!num && precision < 0)
return;
bin2(num >> 1);
_putchar((((num & 1) == 1) ? '1' : '0'));
}

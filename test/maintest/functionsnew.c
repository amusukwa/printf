#include "main.h"
#include <unistd.h>

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
* Return:return  integer
*/
void bin(unsigned int num __attribute__((unused)), int precision __attribute__((unused)), int width, char paddingChar, int zeroFlag)
{
int paddingCount = width - precision;
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
~
                   

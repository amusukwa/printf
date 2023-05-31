#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character c
 * Return: 1 if successful -1 on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
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

#include "main.h"
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
    

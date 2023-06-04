#include "main.h"
/**
 * _putchar - prints character
 * @c: gets character
 * Return: returns 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

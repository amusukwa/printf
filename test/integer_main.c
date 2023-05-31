#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    va_list args;
    print_integer(va_arg(args, int));
    putchar('\n');
    return (0);
}

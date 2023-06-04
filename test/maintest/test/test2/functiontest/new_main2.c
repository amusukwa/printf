
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
 * print_int - Print int
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

int print_int(va_list types, int flags, int width, int precision)
{
    int is_negative = 0;
    int n = va_arg(types, int);
    unsigned int num;

    if (n == 0)
    {
        _putchar('0');
        return 1; 
    }

    num = (unsigned int)n;

    if (n < 0)
    {
        num = (unsigned int)(-n);
        is_negative = 1;
    }

    int digit_count = 0;

    while (num > 0)
    {
        int digit = num % 10;
        _putchar(digit + '0');
        num /= 10;
        digit_count++;
    }

    if (is_negative)
    {
        _putchar('-');
        digit_count++;
    }

   
    int zeros = precision - digit_count;
    while (zeros > 0)
    {
        _putchar('0');
        zeros--;
        digit_count++;
    }

    return digit_count; 
}


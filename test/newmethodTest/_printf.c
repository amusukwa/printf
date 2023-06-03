#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - prints out characters
 * @format: containst format specifiers
 * Return: number of characters printed
 */
int _printf(const char* format, ...) {
    int printed_chars = 0;
    va_list args;

    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++; // Move to the next character after '%'

            switch (format[i]) {
                case 'd':
                case 'i':
                    printed_chars += print_int(args);
                    break;
                case 's':
                    printed_chars += print_string(args);
                    break;
                // Add more cases for other format specifiers
                default:
                    _putchar('%'); // Print the '%' character
                    _putchar(format[i]); // Print the unknown format specifier
                    printed_chars += 2; // Increment the count by 2
                    break;
            }
        } else {
            _putchar(format[i]); // Print regular characters
            printed_chars++;
        }
    }

    va_end(args);

    return printed_chars;
}

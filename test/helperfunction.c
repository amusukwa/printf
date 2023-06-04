int _printf(const char* format, ...) {
    int printed_chars = 0;
    va_list args;

    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++; 

            switch (format[i]) {
                case 'd':
                case 'i':
                    printed_chars += print_int(args);
                    break;
                case 's':
                    printed_chars += print_string(args);
                    break;
                
                default:
                    _putchar('%'); 
                    _putchar(format[i]); 
                    printed_chars += 2; 
                    break;
            }
        } else {
            _putchar(format[i]); 
            printed_chars++;
        }
    }

    va_end(args);

    return printed_chars;
}

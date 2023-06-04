int print_string(va_list args) {
    char* str = va_arg(args, char*);
    
    for (str = va_arg(args, char *); *str; str++)
n += _putchar(*str);    
}

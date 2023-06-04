int print_int(va_list args, int width, int precision, int zeroFlag) {
    int value = va_arg(args, int);
    int printed_chars = 0;

    
    char buffer[32]; 
    int length = snprintf(buffer, sizeof(buffer), "%d", value);

    
    if (zeroFlag && width > length) {
        int paddingCount = width - length;
        for (int i = 0; i < paddingCount; i++) {
            _putchar('0');
            printed_chars++;
        }
    }

    int precisionCount = precision - length;
    for (int i = 0; i < precisionCount; i++) {
        _putchar('0');
        printed_chars++;
    }

    // Print the integer value
    for (int i = 0; i < length; i++) {
        _putchar(buffer[i]);
        printed_chars++;
    }

    return printed_chars;
}


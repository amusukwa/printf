#include <stdio.h>

void to_octal(long dec) {
    long quotient;
    int octalNumber[100], i = 1, j;

    quotient = dec;

   while (quotient != 0) {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }

    for (j = i - 1; j > 0; j--) {
        putchar('0' + octalNumber[j]);
    }
    putchar('\n');
}

int main() {
    long number = 250;
    to_octal(number);
    return 0;
}


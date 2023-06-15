#include <stdio.h>

void printExponent(double y) {
    unsigned long long *ptr = (unsigned long long *)&y;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    printf("Hexadecimal: 0x%11X\n", exponent);
    printf("Binary: 0b");

    for (int i = 10; i >= 0; i--)
    {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double y = 0.7;
    printExponent(y);
    return 0;
}
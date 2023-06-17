#include <stdio.h>

void printBits(unsigned int numb) {
    int i;
    unsigned int mask = 1 << 31; 
    for (i = 0; i < 32; i++) {
        unsigned int bit = (numb & mask) ? 1 : 0;
        printf("%d", bit);

        if ((i + 1) % 8 == 0) {
            printf(" ");
        }

        mask >>= 1; 
    }
}

int main() {
    unsigned int numb;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &numb);
    printf("Bits: ");
    printBits(numb);
    printf("\n");
    return 0;
}

#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char *ptr_a = (char *)a;
    char *ptr_b = (char *)b;
    
    for (size_t i = 0; i < size; i++) {
        char temp = ptr_a[i];
        ptr_a[i] = ptr_b[i];
        ptr_b[i] = temp;
    }
}

int main() {
    int numb1 = 10;
    int numb2 = 20;
    printf("Before swapping: numb1 = %d, numb2 = %d\n", numb1, numb2);
    swap(&numb1, &numb2, sizeof(int));
    printf("After swapping: numb1 = %d, numb2 = %d\n", numb1, numb2);
    
    double pi = 3.14159;
    double e = 2.71828;
    printf("Before swapping: pi = %f, e = %f\n", pi, e);
    swap(&pi, &e, sizeof(double));
    printf("After swapping: pi = %f, e = %f\n", pi, e);
    
    return 0;
}
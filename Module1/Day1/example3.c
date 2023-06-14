#include <stdio.h>

int main() {
    int rollNo, physics, math, chemistry;
    char name[50];

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %2s", name);

    printf("Enter Marks of Physics: ");
    scanf("%d", &physics);

    printf("Enter Marks of Math: ");
    scanf("%d", &math);

    printf("Enter Marks of Chemistry: ");
    scanf("%d", &chemistry);

    int total = physics + math + chemistry;
    float percentage = (float)total / 3;

    printf("\n**** Student Summary *****\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physics);
    printf("Math Marks: %d\n", math);
    printf("Chemistry Marks: %d\n", chemistry);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
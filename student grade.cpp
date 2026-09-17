#include <stdio.h>

int main() {
    float average;

    printf("Enter average marks: ");
    scanf("%f", &average);

    if (average >= 90)
        printf("Grade: A");
    else if (average >= 80)
        printf("Grade: B");
    else if (average >= 70)
        printf("Grade: C");
    else if (average >= 60)
        printf("Grade: D");
    else
        printf("Grade: F");

    return 0;
}
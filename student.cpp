#include <stdio.h>

int main()
{
    int marks;

    printf("Enter average marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
            printf("Distinction");
            break;

        case 6:
            printf("First");
            break;

        case 5:
            printf("Second");
            break;

        case 4:
            printf("Pass");
            break;

        default:
            printf("Try Again");
    }

    return 0;
}
#include <iostream.h>
#include<conio.h>


int main()
{
    int marks;

    cout << "Enter average marks: ";
    cin >> marks;

    switch (marks / 10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << "Distinction";
            break;

        case 6:
            cout << "First";
            break;

        case 5:
            cout << "Second";
            break;

        case 4:
            cout << "Pass";
            break;

        default:
            cout << "Try Again";
    }

    return 0;
}
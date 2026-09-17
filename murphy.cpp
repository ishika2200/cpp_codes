#include <iostream.h>

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 7 == 0)
        cout << "Murphy Number";
    else
        cout << "Not a Murphy Number";

    return 0;
}
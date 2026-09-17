#include <iostream.h>
#include<conio.h>
int main()
{
    int m1, m2, m3, fail = 0;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    if (m1 < 40)
        fail++;

    if (m2 < 40)
        fail++;

    if (m3 < 40)
        fail++;

    if (fail == 0)
        cout << "Pass";

    if (fail == 1)
        cout << "Public ATKT";

    if (fail >= 2)
        cout << "Public Fail";

    return 0;
}
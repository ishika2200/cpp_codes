#include <iostream.h>

int main()
{
    int n, min, max;

    cout << "Enter numbers: ";
    cin >> n;

    min = n;
    max = n;

    while (n != -999)
    {
	if (n < min)
	    min = n;

	if (n > max)
	    max = n;

	cout<<"enter number:";
	cin >> n;
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}
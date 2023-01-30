#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r[10], h, n;

    cout << "Enter size of array : ";
    cin >> n;

    for (h = 0; h < n; h++)
    {
    	cout <<"enter of i : ";
        cin >> r[h];
    }

    cout << "Sqaure root of elements : " << endl;

    for (h = 0; h < n; h++)
    {
        cout << sqrt(r[h]) << endl;
    }
}


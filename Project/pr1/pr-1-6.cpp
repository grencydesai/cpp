#include<iostream>
using namespace std;

int main()
{
    int g,n;

    cout << "Enter Size of array : ";
    cin >> n;

    int a[n];

    for(g=1;g<n;g++)
    {
        cin >> a[g];
    }

    cout << "cube is : " << endl;
    for(g=1;g<n;g++)
    {
        cout << a[g] * a[g] * a[g] << endl;
    }
}

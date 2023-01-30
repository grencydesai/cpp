#include <iostream>
using namespace std;

int fact(int);
int main()
{
    int g, ans;
        cout << "Enter Value Of G = ";
		cin >> g;
	 ans = fact(g);
		cout << "Factorial Of " << g << " is = " << ans;
}
int fact(int h)
{
    if (h <= 1)
    return 1;
		else
	return h * fact(h - 1);
}

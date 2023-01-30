#include <iostream>
using namespace std;

void swap();
int main()
{
   swap();
}
void swap()
{
   int a[3], b[3], c[3], i;
     cout << "Enter 1st Array =" << endl;
   for (i = 0; i < 3; i++)
     cin >> a[i];
     cout << "Enter 2nd Array =" << endl;
   for (i = 0; i < 3; i++)
     cin >> b[i];
   for (i = 0; i < 3; i++)
{
  c[i] = a[i];
  a[i] = b[i];
  b[i] = c[i];
}
    cout << "After Swaping Array" << endl;
    cout << "1st Array" << endl;
   for (i = 0; i < 3; i++)
{
    cout << a[i] << endl;
}
    cout << "2nd Array" << endl;
   for (i = 0; i < 3; i++)
{
    cout << b[i] << endl;
}
}



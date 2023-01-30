#include <iostream>
using namespace std;

int table();
int main()
{
  table();
  return 0;
}
    inline int table()
{
       int a, h;
         cout << "Enter Number = ";
         cin >> a;
       for (h = 1; h <= 10; h++)
{
           cout << a << " " << h << " " << a * h << endl;
}
}

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
       int n, h;
         cout << "Enter Number = ";
         cin >> n;
       for (h = 1; h <= 10; h++)
{
           cout << n << " " << h << " " << n * h << endl;
}
}

#include <iostream>
using namespace std;

  int h1(int, int);
  int h3(int);
  
int main()
{
   int g = 24, b = 37;
   h3(h1(g , b));
}
   int h1(int g, int b)
{
    return (g + b);
}
   int h3(int g)
{
    cout << "Addition is " << g;
}

#include <iostream>
using namespace std;

class dis
{
  private:
     int feet1, feet2, inch1, inch2;
   	 int a, g;
  public:
    void getdata(){
      cout << "FIRST DISTANCE" << endl<< endl;
      cout << "Enter Feet : ";
      cin >> feet1;
      cout << "Enter Inch : ";
   	  cin >> inch1;
      cout << "SECOUND DISTANCE" << endl<< endl;
      cout << "Enter Feet : ";
      cin >> feet2;
      cout << "Enter Inch : ";
      cin >> inch2;
    a = feet1 + feet2;
    g = inch1 + inch2;
  while (g >= 12)
{
    g -= 12;
    a++;
}
}
    void setdata(){
    cout << "Add two distance:" << endl<< endl;
    cout << "Feet = " << a << endl;
    cout << "Inch = " << g << endl;
}
};
int main()
{
      dis a1;
      a1.getdata();
      a1.setdata();
}

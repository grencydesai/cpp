#include <iostream>
using namespace std;
class A
{
public:
virtual void grency()
{
cout << "\n\n\nHELLO grency" << endl
<< endl;
}
};
class B : virtual public A
{
public:
void hello()
{
cout << "zenisha: How are you???" << endl;
}
};
class C : public A
{
public:
void how()
{
cout <<" grency: I am fine!!!" << endl
<< endl
<< endl;
}
};
int main()
{
B b1;
C c1;
c1.grency();
b1.hello();
c1.how();
}

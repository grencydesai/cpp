#include <iostream>
using namespace std;

class A{
	protected:
		int a = 7;
	public:
		void value(){
			cout << endl<< "Value = ";
			cin >> a;
}
};
class B : public A{
	public:
		void setdata(){
			cout << endl<< "Square of " << a << " = " << a * a << endl;
}
};
class C : public A{
	public:
		void getdata(){
			cout << endl<< "Cube of " << a << " = " << a * a * a << endl<< endl;

}
};
int main(){
	
	B b1;
	C c1;
	b1.value();
	b1.setdata();
	c1.getdata();
}

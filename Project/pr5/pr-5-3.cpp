#include <iostream>
using namespace std;

class mother{
	protected:
		string name;
		int age;
	public:
		void Setdata(){
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Age : ";
			cin >> age;
}
};
class Zebra : public mother{
	public:
		void zebra1(){
			cout << endl<< "The Zebra name is " << name << " ,The Zebra is " << age << "Years old" << endl<< endl;
}
};
class Dolphin : public mother{
	public:
		void dolphin2(){
			cout << endl << "The Dolphin name is " << name << " ,The Dolphin is " << age <<"Years old" << endl<< endl;
}
};
int main(){
	
	Zebra z1;
	Dolphin d1;
		cout << endl<< "* Value For ZEBRA *" << endl<< endl;
		
	z1.Setdata();
		cout << endl<< "* Value For DOLPHIN *" << endl<< endl;
		
	d1.Setdata();
		cout << endl<< "* ZEBRA INFORMATION *"<< endl;
		
	z1.zebra1();
		cout << endl<< "* DOLPHIN INFORMATION *"<< endl;
		
	d1.dolphin2();
}












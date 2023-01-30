#include <iostream>
using namespace std;

class area{
	protected:
		float height, width;
	public:
		void area1(){
			cout << "Enter Heights : ";
			cin >> height;
			cout << "Enter Width : ";
			cin >> width;
}
};
class triangle : public area{
	public:
		void Setdata(){
			cout << endl<< endl<< "\tArea of Triangle : " << (width * height) / 2 << endl;
			cout << "==================" << endl;
}
};
class rectangle : public area{
	public:
		void getdata(){
			cout << endl<< "\tArea of Rectangle : " << width * height << endl<< endl;
			cout << "==================" << endl;
}
};
int main(){

	triangle t1;
	rectangle r1;
		cout << endl<< "\t\t* Triangle *\n\n";
		
	t1.area1();
	t1.Setdata();
		cout << endl<< "\t\t* Rectangle *\n\n";
		
	r1.area1();
	r1.getdata();
}

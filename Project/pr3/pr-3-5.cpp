#include <iostream>
using namespace std;


class name{
	private:
		char g[100];
	public:
void setdata(){
		cout << "Enter Name : ";
		cin >> g;
}
void getdata(){
		cout << endl<< "=====================" << endl<< g;
}
};
int main(){
	
	name n1;
	n1.setdata();
	n1.getdata();
}

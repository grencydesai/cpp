#include <iostream>
using namespace std;



class time{
		int hour, min, sec;

	public:
		void setdata(){
			cout << endl<< "Enter Secounds:";cin >> sec;
			hour = sec / 3600;
			sec %= 3600;
			min = sec / 60;
			sec %= 60;
}
		void getdata(){
			cout << hour << ":" << min << ":" << sec << endl;
}
};
int main(){
	
	time g1;
	g1.setdata();
	g1.getdata();
}

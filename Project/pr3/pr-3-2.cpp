#include <iostream>
using namespace std;

class times{
        int hour, min, sec, hour1, min1, sec1;
	    int g, h, c;
	public:
		void settime(){
			cout << endl<< "1ST TIME" << endl<< endl;
			cout << "Enter Hour:";
			cin >> hour;
			cout << "Enter Minutes:";
			cin >> min;
			cout << "Enter Secounds:";
			cin >> sec;
			cout << endl<< "2ND TIME" << endl<< endl;
			cout << "Enter Hour:";
			cin >> hour1;
			cout << "Enter Minutes:";
			cin >> min1;
			cout << "Enter Secounds:";
			cin >> sec1;
			
			g = hour + hour1;
			h = min + min1;
			c = sec + sec1;
	while (c >= 60)
{
		c -= 60;
		h++;
}
	while (h >= 60)
{
		h -= 60;
		g++;
}
}
		void gettime(){
			cout << endl<< "Total Time Is:" << endl<< endl;
			cout << "Hour:" << g << endl
				 << "Minutes:" << h << endl
				 << "Secounds:" << c;
}
};
int main()
{
	times g1;
	g1.settime();
	g1.gettime();
}

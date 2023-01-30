#include <iostream>
using namespace std;

class house{
	private:
		int room, kitchen, hall;
		int sofa, Tv;
	public:
		void setdata(){
			cout << endl<< "HOUSE DETAILS:" << endl<< endl;
			cout << "Enter room:";
			cin >> room;
			cout << "Enter kitchen:";
			cin >> kitchen;
			cout << "Enter hall:";
			cin >> hall;
			cout << endl<< "ROOM DETAILS:" << endl<< endl;
			cout << "Enter sofa:";
			cin >> sofa;
			cout << "Enter Tv:";
			cin >> Tv;
			
}
	    void getdata(){
			cout << endl<< "IN HOUSE" << endl<< endl
				 << room << " Room" << endl
				 << kitchen << " Kitchen" << endl
				 << hall << " Hall" << endl<< endl
				 << "In Room" << endl<< endl
				 << sofa << " Sofa" << endl
				 << Tv << " Tv" << endl;
				 
}
};
int main(){
	
		house h1;
		h1.setdata();
		h1.getdata();
}

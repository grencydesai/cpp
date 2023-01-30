#include <iostream>
using namespace std;

class mother{
	public:
		mother(){
			cout << "\t\t* Mother and Daughter conversation *"<<endl<<endl;
			cout << "\t\tMother says : How are you daughter..." << endl;
}
};
class daughter : public mother{
	public:
		void display(){
			cout << "\t\tDaughter says : I am fine mother..."<< endl<< endl;
}
};
int main(){
	
	daughter a1;
	a1.display();
}


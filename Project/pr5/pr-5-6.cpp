#include <iostream>
using namespace std;

class H{
	protected:
		int id;
		string name, role;
	public:
		void setterA(){
			cout << endl<< endl<< "Enter Id : ";
			cin >> id;
			cout << "Enter Name : ";
			fflush(stdin);
			getline(cin, name);
			cout << "Enter Role : ";
			getline(cin, role);
}
};
class G{
	protected:
		int salary;
		string experience;
	public:
		void setterB(){
			cout << "Enter Salary : ";
			cin >> salary;
			cout << "Enter Experience : ";
			fflush(stdin);
			getline(cin, experience);
}
};
class M{
	protected:
		string company_name, address;
	public:

		void setterC(){
			cout << "Enter Company Name : ";
			fflush(stdin);
			getline(cin, company_name);
			cout << "Enter Address : ";
			getline(cin, address);
}
};
class L : public H, public G, public M{
	protected:
		string email;
		long long int contact;
	public:
		void setterD(){
			cout << "Enter Email : ";
			fflush(stdin);
			getline(cin, email);
			cout << "Enter Contact : ";
			cin >> contact;
			cout << endl<< "=========================="<< endl;
			
}
		void getterD(){
			cout << endl	<< endl<< " EMPLOYEE DETAILS " << endl<< "==============" << endl;
			cout << "Id : " << id << endl;
			cout << "Name : " << name << endl;
			cout << "Role : " << role << endl;
			cout << "Salary : " << salary << endl;
			cout << "Exprience : " << experience << endl;
			cout << "Company Name : " << company_name << endl;
			cout << "Address : " << address << endl;
			cout << "Email : " << email << endl;
			cout << "Contact : " << contact << endl;
			
}
};
int main(){
			
		L l1;
		l1.setterA();
		l1.setterB();
		l1.setterC();
		l1.setterD();
		l1.getterD();
}

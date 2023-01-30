#include <iostream>
using namespace std;

class emp{
	protected:
		int emp_id, emp_salary;
	public:
		void setdata1(){
			cout << endl << endl << "READ EMPLOYEE DETAILS " << endl	<< endl;
			cout << "Employee ID : ";
			cin >> emp_id;
			cout << "Employee Salary : ";
			cin >> emp_salary;
}
};
class empRead{
	protected:
		char emp_nm[100], emp_role[100];
	public:
		void setdata(){
			cout << "Employee Name : ";
			cin >> emp_nm;
			cout << "Employee Role : ";
			cin >> emp_role;
}
};
class printEmp : public empRead, public emp{
	public:
		void getdata(){
			cout << endl<< endl<< " PRINT EMPLOYEE DETAILS " << endl<< endl;
			cout << "Employee Id : " << emp::emp_id << endl;
			cout << "Employee Name : " << empRead::emp_nm << endl;
			cout << "Employee Role : " << empRead::emp_role << endl;
			cout << "Employee Salary : " << emp::emp_salary << endl	<< endl;
}
};
int main(){
	
	printEmp e1;
	e1.setdata1();
	e1.setdata();
	e1.getdata();
}






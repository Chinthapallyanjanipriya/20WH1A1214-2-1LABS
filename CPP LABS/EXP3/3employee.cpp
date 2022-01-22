#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
	char emp_name[30];
	int emp_number;
	float basic, da, it, gross_salary, net_salary;

	public:
	void read_emp_details(int count){
	cout<<"\nEnter Employee"<<count<<"Details";
	cout<<"\nEmployee Number:";
	cin>>emp_number;
	cout<<"Employee Name:";
	cin>>emp_name;
	cout<<"Basic Salary:";
	cin>>basic;
	}
	float find_net_salary(){
		da = basic * 0.52;
		gross_salary = basic + da;
		it = gross_salary * 0.30;
		net_salary = (basic + da) - it;
		return net_salary;
	}
	void display_emp_details(int count){
		cout<<"\n\Employee"<<count<<"Details";
		cout<<"\nEmployee Number :"<<emp_number;
		cout<<"\nEmployee Name :"<<emp_name;
		cout<<"\nNet Salary:"<<net_salary;
	}
};
int main(){

	Employee emp[100];
	int number_of_emp, count;
	cout<<"\nPlease enter the number of Employees:";
	cin>>number_of_emp;
	for(count=0; count<number_of_emp; count++){
	emp[count].read_emp_details(count+1);
	}
	for(count=0; count<number_of_emp; count++){
	emp[count].find_net_salary();
	}
	for(count=0; count<number_of_emp; count++){
	emp[count].display_emp_details(count+1);
	}
	return 0;
}


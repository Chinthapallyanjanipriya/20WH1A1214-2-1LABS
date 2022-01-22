#include<iostream>
using namespace std;
struct college_info{
	char college_name[15];

	char college_code[10];
	char dept[50];
	int intake;
};
int main() {
	struct college_info college;
	cout<<"Enter the College Information\n";
	cout<<"Name of the college:";
	cin>>college.college_name;
	cout<<"College Code:";
	cin>>college.college_code;
	cout<<"Department:";
	cin>>college.dept;
	cout<<"Department In-take:";
	cin>>college.intake;
	cout<<"\nCollege Information";
	cout<<"\nName of the college:"<<college.college_name;
	cout<<"\nCollege University Code:"<<college.college_code;
	cout<<"\nName of the Department:"<<college.dept;
	cout<<"\nThe department of"<<college.dept<<"has intake:"<<college.intake;
	return 0;
}

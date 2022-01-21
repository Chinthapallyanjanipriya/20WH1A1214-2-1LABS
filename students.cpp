#include<iostream>
using namespace std;
class student{
	string name;
	int roll_no;
	char grade;
	public:
	void read(){
	cout<<"Enter student name:"<<endl;
	cin>>name;
	cout<<"Enter student rollnumber:"<<endl;
	cin>>roll_no;
	cout<<"Enter student grade:"<<endl;
	cin>>grade;
	}
	void display(){
	cout<<"Name:"<<name<<endl;
	cout<<"Roll number:"<<roll_no<<endl;
	cout<<"Grade:"<<grade<<endl;
	}
};
int main(){
	student s[3];
	int i;
	for(i=0;i<3;i++){
	s[i].read();
	}
	for(i=0;i<3;i++){
	s[i].display();
	}
	return 0;
}


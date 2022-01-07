#include<iostream>
#include<exception>
using namespace std;
int main(){
	int a,b;
	cout<<"enter a & b";
	cin>>a>>b;
	try{
		if(b==0){
			throw b;
		}
		else{
			cout<<"The value is"<<a/b<<endl;
		}
	}
	catch(int x){
		cout<<"The value of b should not be zero"<<endl;
		cout<<"exception caught";
	}
	return 0;
}

#include<iostream>
using namespace std;
class base{
	public:
	void show(){
	cout<<"base class\n";
	}
};
class derived:public base{
	public:
	void show(){
	cout<<"derived class\n";
	}
};
int main()
{
	base *bp = new derived;
	bp->show();
	return 0;
}

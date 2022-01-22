#include<iostream>
using namespace std;
class test {
	public:
	int y, z;
	test(){
		y = 7;
		z = 13;
	}
	~test(){ }
};
int main(){
	test a;
	cout<<"The sum is:"<<a.y + a.z;
	return 0;
}

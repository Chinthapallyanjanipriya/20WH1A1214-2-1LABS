#include<iostream>
using namespace std;
class Rectangle{
        public:
        int length, breadth;
        void read(){
                cout<<"Length=";
                cin>>length;
                cout<<"\nBreadth=";
                cin>>breadth;

}
void display(){
        int area=length*breadth;
        cout<<"\nArea="<<area;
        }
};
int main (){
        Rectangle rect, *ptr;
        ptr=&rect;
        ptr->read();
        ptr->display();
        return 0;
}

#include<iostream>
using namespace std;
class Box{
   private:
        int length;
   public:
         Box (): length (0) {}
   friend int Len (Box);
};
int Len(Box b)
{
    b.length +=10;
    return b.length;
}
int main()
{
   Box b;
   cout<<"Length of box:"<<Len(b)<<endl;
   return 0;
}

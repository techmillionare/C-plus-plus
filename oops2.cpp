#include<iostream>
using namespace std;

class complex
{
   private:
   int real;
   int img;
   
   public:
   complex(int r=0,int i=0)
   {
     real=r;
     img=i;
   }
   friend complex operator+(complex c1,complex c2);
};
   complex operator+(complex c1,complex c2)
   {
     complex temp;
     temp.r=c1.real+c2.real;
     temp.i=c1.img+c2.img;
     return temp;
   }
int main()
{
    complex c1(4,6);
    complex c2(5,8);
     complex c3=c2.operator+(c1);
    cout<<c3.real<<"+i"<<c3.img;
    return 0;
}
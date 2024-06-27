#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    int setLength(int l)
    {
        length = l;
    }
    int setBreadth(int b)
    {
        breadth = b;
    }
    int getLenth()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
  Rectangle r;
  r.setLength(4);
  r.setBreadth(10);
   cout<<"Area is:"<<r.area()<<endl;
   cout<<"perimeter is:"<<r.perimeter();
   return 0;
}
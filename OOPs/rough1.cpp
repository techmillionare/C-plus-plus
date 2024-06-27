#include<iostream>
using namespace std;

class Rectangle{
    public:
    double length;
    double breadth;
    Rectangle(double l,double b){
        length=l;
        breadth=b;
    }
    int Area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main(){
    Rectangle r1(4,5);
    cout<<r1.Area()<<endl;
    cout<<r1.perimeter();
    return 0;
}
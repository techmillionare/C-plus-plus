#include<iostream>
using namespace std;

int area()
{
  float base,height,area;
  cout<<"enter the value of base and height:";
  cin>>base>>height;
  // cout<<"enter the value of height:";
  // cin>>height;

  area = 0.5*base*height;
  cout<<"Area of triangle is "<<area;
  return 0;
}    
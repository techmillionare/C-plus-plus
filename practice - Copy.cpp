#include<iostream>
using namespace std;

int main() {
  int t;
  cout<<"enter t:";
  cin>>t;
  for (int i = 0; i < t; i++) {
    char x;
    cout << "enter x:";
    cin >> x;
  
        if ('A' <= x && x <= 'Z')
		{
          cout << "1"<<endl;
        } else if ('a' <= x && x <= 'z') 
		{
          cout << "0"<<endl;
        } else {
          cout << "-1"<<endl;
        }
  }
  return 0;
}

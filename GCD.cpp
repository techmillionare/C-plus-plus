#include<iostream>
using namespace std;

int i;
int main(){
    int a,b;
    int count=0;
    cout<<"enter numbers:";
    cin>>a>>b;

while(a>0 && b>0){
    if(a>b) a=a%b;
    else b=b%a;
}
if (a==0) cout<<"GCD is:"<<b;
else cout<<"GCD is:"<<a; 
    return 0;
}
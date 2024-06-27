#include<iostream>
using namespace std;

int main(){
    int count=0;
    int n;
    cout<<"enter number:";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
            if(count==2){
            cout<<"prime number";
            }
        else{
            cout<<"not prime number";
        }
    return 0;
}
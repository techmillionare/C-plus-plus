#include<iostream>
using namespace std;

void print1(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //number
      for(int j=1;j<=i;j++){
        cout<<j;
      }
      //for space
      for(int j=1;j<=space;j++){
        cout<<" ";
      }
      //for number
       for(int j=i;j>=1;j--){
        cout<<j;
       }
       cout<<"\n";
       space-=2;
}
  }

int main(){
    int t;
    cout<<"enter t:";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"enter n:";
        cin>>n;
        print1(n);
    }     
    return 0;
}
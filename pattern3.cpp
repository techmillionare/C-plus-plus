#include<iostream>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<=(n-i-1);j++){
            cout<<" ";
        }
            for(int j=0;j<(2*i+1);j++){
                //char ch='A'+i;
                cout<<"*";
            }
          for(int j=0;j<=(n-i-1);j++){
            cout<<" ";   
    }
    cout<<"\n";
}
  }

int main(){
    int t;
   // int count=1;
    cout<<"enter t:";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"enter n:";
        cin>>n;
        print(n);
    }
    return 0;
}
#include <iostream>
#include<string.h>
using namespace std;

// void ReverseArray(int l,int r,int A[],int n){
//      if(l>=r){
//         return;
//      }
//      swap(A[l],A[r]);
//      ReverseArray(l+1,r-1,A,n);
// }

// int main(){
//     int A[5]={1,3,4,6,7};
//    ReverseArray(0,4,A,5);
//    for(int i=0;i<5;i++){
//        cout<<A[i]<<" ";
//    }
//    return 0;
// }

void ReverseString(int i,string str,int n){
    if(i>n-i-1){
        return;
    }
    swap(str[i],str[n-i-1]);
    ReverseString(i+1,str,n);
}

int main(){
   string str;
   cout<<"enter string:";
   cin>>str;
    ReverseString(0,str,str.length());
    cout<<str;
    return 0;
}
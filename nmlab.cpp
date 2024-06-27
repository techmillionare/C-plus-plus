#include<bits/stdc++.h>
using namespace std;

// int add(int i,int n,int sum){
//     if(i>n){
//         return sum;
//     }
//    add(i+1,n,sum+i);
// }

// int add(int n){
//     if(n==0){
//         return 0;
//     }
//     return n + add(n-1);
// }

// int fabonacii(int n){
//     if(n<=1) return n;

//     return fabonacii(n-1)   asd+ fabonacii(n-2);
// }

int power(int x,int n){
    int m=n;
    if(m<0){
        m=-1*n;
    }
    long long ans=1;
    while(m>0){
     if(m%2==0) {
        x=x*x;
        m=m/2;
     }
     else if(m%2==1) {
        ans=ans*x;
        m=m-1;
     }
    }
     if(n<0){
        ans=1/ans;
     }
     return ans;
}

int main(){
   cout<<power(2,4);
    return 0;
}
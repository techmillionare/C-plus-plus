#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    if(n<10) {
        for(int i=0;i<s.length();i++){
            cout<<s[i];
            return 0;
        }
    }
    if(n>=10){
        int x=(n-2);
       string str=to_string(x);
       int first=0;
       int last=n-1;
       s=s[first]+str+s[last];
      cout<<s;
    }
        return 0;
}
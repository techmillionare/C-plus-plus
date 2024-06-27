#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string str2=NULL;
    char ch='.';
    string s=to_string(ch);
    for(int i=0;i<str.length();i++){
        if(str[i]=='A' || str[i]=='a' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o'
        || str[i]=='O' || str[i]=='u' || str[i]=='U' || str[i]=='y' || str[i]=='Y'){
            str.erase(str[i]);
        }
        else{
            str2=str2+s.append(str[i]);
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
return 0;
}
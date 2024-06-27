#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char str1,str2,str3;
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>str1>>str2;
	    for(int j=0;j<5;j++){
	    if(str1[j]==str2[j]){
	        str3[j]='G';
	    }
	    else {
	        str3[j]='B';
	    }   
	}
	}
	cout<<str3;
	return 0;
}

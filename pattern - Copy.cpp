#include<iostream>
using namespace std;

void print1(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
            cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		cout<<"\n";
	}
}
        void print2(int n){
	          for(int i=0;i<n;i++){
		        for(int j=0;j<i;j++){
                  cout<<" ";
		}
		for(int j=0;j<2*n-(2*i+1);j++){
			cout<<"*";
		}
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int t;
	cout<<"enter the value of t:";
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cout<<"enter n:";
		cin>>n;
		print1(n);
		print2(n);
	}
	//print1(n);
	return 0;
}

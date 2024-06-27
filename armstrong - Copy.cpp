#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int rev=0;
	int ld;
	int sum=0;
	int count=0;
	cout<<"enter n:";
	cin>>n;
	int x=n;

	while(n!=0){
		n=n/10;
		++count;
	}
	int p=n;

	while(n>0){
		ld=n%10;
		sum=sum+pow(ld,count);
		//rev=(rev*10)+ld;
		n=n/10;
	}
	cout<<"number of digits:"<<count<<endl;
	if(sum==p) {cout<<"ARMSTRONG";}
	else cout<<"NOT ARMSTRONG";
	return 0;
}

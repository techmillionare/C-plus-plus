#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6};
  for(int i=0;i<(6/2);i++){
    int temp=arr[i];
    arr[i]=arr[6-1-i];
    arr[6-1-i]=temp;
  }
  for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
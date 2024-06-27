#include<iostream>
using namespace std;

void binarysearch(int arr[],int size,int key){
    int left=0;
    int right=size;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
              cout<<"key found";
              return;
        }
        else if(arr[mid]>key){
              right=mid-1;
        }
        else{
            left=mid+1;
        }
          }
          cout<<"key not found";
    }


    int main(){
        int size;
        cout<<"enter the size of an array:";
        cin>>size;
        int a[size];
        cout<<"enter elements:";
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
        int key;
        cout<<"enter key:";
        cin>>key;
        binarysearch(a,size,key);
        return 0;
    }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    int A[n],l=0,h=n-1,key,mid;

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
   cout<<"enter key:";
    cin>>key;

    while (l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
        cout<<"key found";
        return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else{
             l=mid+1;
        }
    }
    cout<<"key not found";
}
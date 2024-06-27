#include<iostream>
using namespace std;

int main(){
     int a,b,c,d;
    int t;
    cout<<"enter t:";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"enter a,b,c,d:";
        cin>>a>>b>>c>>d;
    }
    int x=a;
    int y=b;
    int z=c;
    while(x<=b && y<=c && z<=d)
    {
        if(y+z>=x)
        cout<<x<<y<<z;
        else
        x++;
        y++;
        z++;

    }
    return 0;
}
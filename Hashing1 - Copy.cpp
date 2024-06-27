 #include<bits/stdc++.h>
// #include<iostream>
using namespace std;

//number HASING
// int main(){
//     int n;
//     cout<<"enter Array size:";
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//     int hash[12]={0};
//     for(int i=0;i<n;i++){
//      hash[A[i]]+=1;
//     }

//   int q;
//   cout<<"enter how many times number to be search:";
//   cin>>q;
//   while(q!=0){
//     int n;
//     cout<<"enter number to search: ";
//     cin>>n;
//     cout<<hash[n]<<endl;
//     q--;
//   }
// return 0;
// }

//lowercase HASING
// int main(){
//     string str;
//     cout<<"enter string:";
//     getline(cin,str);
    
//     int hash[26]={0};
//     for(int i=0;i<str.length();i++){
//         if(str[i]>='a' && str[i]<='z'){
//            hash[str[i]-'a']+=1;
//         }
//     }
//      int q;
//   cout<<"enter how many times character to be search:";
//   cin>>q;
//   while(q!=0){
//     char ch;
//     cout<<"enter character to search: ";
//     cin>>ch;
//     cout<<hash[ch-'a']<<endl;
//     q--;
//   }
// return 0;
// }

//character HASHING when uppercase letters also present
// int main(){
//   string str;
//   cout<<"enter string:";
//   getline(cin,str);

//   int hash[256]={0};
//   for(int i=0;i<str.length();i++){
//     hash[str[i]]++;
//   }

//   int q;
//   cout<<"enter how many times character to be search:";
//   cin>>q;
//   while(q--){
//     char ch;
//     cout<<"enter character to search: ";
//     cin>>ch;
//     cout<<hash[ch]<<endl;
//     q--;
//   }
//   return 0;
//   }

//uppercase HASHING
// int main(){
//   string str;
//   cout<<"enter string:";
//   getline(cin,str);

//   int hash[26]={0};
//   for(int i=0;i<str.length();i++){
//     if(str[i]>='A' && str[i]<='Z'){
//     hash[str[i]-'A']++;
//   }
//   }

//   int q;
//   cout<<"enter number of times to search:";
//   cin>>q;
//   while(q--){
//     char ch;
//     cout<<"enter character to search:";
//     cin>>ch;
//     cout<<hash[ch-'A']<<endl;
//   }
//   return 0;
// }

///maps stores all the values i  the sorted array.
// number HASHING by map
// int main(){
//   int n;
//   cout<<"enter size of an array:";
//   cin>>n;
//   int A[n];
//   for(int i=0;i<n;i++){
//     cin>>A[i];
//   }

//   map<char,int>mpp;
//   for(int i=0;i<n;i++){
//     mpp[A[i]]++;
//   }
//   int q;
//   cout<<"enter number of times to be search:";
//   cin>>q;
//   while(q--){
//     int n;
//     cout<<"enter number to search:";
//     cin>>n;
//     cout<<mpp[n]<<endl;
//   }
//   return 0;
// }

// character HASING by map
// int main(){
//   string str;i
//   cout<<"enter string:";
//   getline(cin,str);

//   map<char,int>mpp;
//   for(int i=0;i<str.length();i++){
//     mpp[str[i]]++;
//   }
//   int q;
//   cout<<"enter number of times to be search:";
//   cin>>q;
//   while(q--){
//     char ch;
//     cout<<"enter character to search:";
//     cin>>ch;
//     cout<<mpp[ch]<<endl;
//   }
//   return 0;
// }

// HASING by unorderd map
int main(){
  string str;
  cout<<"enter string:";
  getline(cin,str);

  unordered_map<char,int>mpp;
  for(int i=0;i<str.length();i++){
    mpp[str[i]]++;
  }
  
  int q;
  cout<<"enter number of times to be search:";
  cin>>q;
  while(q--){
    char ch;
    cout<<"enter character to search:";
    cin>>ch;
    cout<<mpp[ch]<<endl;
  }
  return 0;
}












#include<bits/stdc++.h>
using namespace std;

// int main() {
//   int t;
//   cout<<"enter t:";
//   cin>>t;
//   for (int i = 0; i < t; i++) {
//     char x;
//     cout << "enter x:";
//     cin >> x;
  
//         if ('A' <= x && x <= 'Z')
// 		{
//           cout << "1"<<endl;
//         } else if ('a' <= x && x <= 'z') 
// 		{
//           cout << "0"<<endl;
//         } else {
//           cout << "-1"<<endl;
//         }
//   }
//   return 0;
// }
//{ Driver Code Start

// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
      int maxi=*max_element(fruits.begin(),fruits.end());
      int hash[maxi]={0};
       for(int i=0;i<N;i++){
           hash[fruits[i]]++;
       }
    //   sort(hash,hash+N);
      int f_max=-1;
      int s_max=-1;
      for(int i=1;i<=maxi;i++){
          if(hash[i]>f_max){
              s_max=f_max;
              f_max=hash[i];
          }
          if(s_max<hash[i] && hash[i]!=f_max){
              s_max=hash[i];
          }
      }
    
       int ans=f_max+s_max;
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends
// int main(){
//   int arr[]={5,2,0,1};
//   int f=-1;
//   int s=-1;
//   for(int i=0;i<5;i++){
//         if(f<arr[i]){
//           s=f;
//           f=arr[i];
//         }
//         else if(s<arr[i] && arr[i]!=f){
//           s=arr[i];
//         }
//   }
//   cout<<f<<" "<<s;
//   return 0;
// }
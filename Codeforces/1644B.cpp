#include <bits/stdc++.h>
using namespace std;
 
   void ans(){ 
       long long n;
       cin>>n;
       if(n==3)
      {
          cout<<3<<" "<<1<<" "<<2<<endl;
          cout<<1<<" "<<3<<" "<<2<<endl;
          cout<<3<<" "<<2<<" "<<1<<endl;
          return;
      }
      else{
      vector<long long> afp;
      for(int i=n;i>=1;--i){
      afp.push_back(i);
      }
      for(int i=0;i<=n-1;++i)
      {
          for(int k=n-i;k<=n-1;++k){
          cout<<afp[k]<<" ";
          }
          for(int j=0;j<=n-i-1;++j){
          cout<<afp[j]<<" ";
          }
          cout<<"\n";
      }
      }
   }
      
  int main(){
      long long t;
      cin>>t;
      while(t--){
          ans();
      }
  }
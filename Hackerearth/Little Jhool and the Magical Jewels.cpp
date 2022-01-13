#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int rs=0,us=0,bs=0,ys=0;
    for(int i=0;i<s.size();++i){
      if(s[i]=='r'){
        rs++;
      }
      if(s[i]=='u'){
        us++;
      }
      if(s[i]=='b'){
        bs++;
      }
      if(s[i]=='y'){
        ys++;
      }
    }
  // int ans=min(min(rs,us),min(bs,ys));
  cout<<min(min(rs,us),min(bs,ys))<<endl;
  } 
}
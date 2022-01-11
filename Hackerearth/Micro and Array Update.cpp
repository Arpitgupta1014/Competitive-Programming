#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,a;
    cin>>n>>k;
    int least=INT_MAX;
    for(int i=0;i<n;++i){
      cin>>a;
      least=min(least,a);
    }
    if(least>=k){
      cout<<"0"<<endl;
    }
    else{
      cout<<k-least<<endl;
    }
  }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,c=0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  sort(a,a+n);
  int l=0,r=n-1;
  while(l<r){
    if(a[l]+a[r]>k){
      r--;
    }
    else if(a[l]+a[r]<k){
      l++;
    }
    else{
      c=1;
      break;
    }
  }
  
  if(c==1){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}

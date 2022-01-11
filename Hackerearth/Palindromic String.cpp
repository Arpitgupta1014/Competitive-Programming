#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  string rev_string;
  for(int i=s.size()-1;i>=0;--i){
    rev_string.push_back(s[i]);
  }
  if(s==rev_string){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
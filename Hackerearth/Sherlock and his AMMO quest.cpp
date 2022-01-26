#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  map<int,multiset<string>> m;
  while(t--){
    int n;
    string s;
    cin>>s>>n;
    m[-n].insert(s);
  }
    for(auto &pair : m){
      auto &string = pair.second;
      auto &integer = pair.first;
      for(auto &names : string){
        cout<<names<<" "<<-integer<<endl;
      }
  }
}
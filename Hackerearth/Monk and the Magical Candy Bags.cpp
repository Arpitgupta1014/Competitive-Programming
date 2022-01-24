#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    long long candy_count;
    multiset<ll> bags;
    for(ll i=0;i<n;++i){
      cin>>candy_count;
      bags.insert(candy_count);
    }
    ll sum=0;
    for(ll i=0;i<k;++i){
      auto last_it=(--bags.end());
      candy_count=*last_it;
      sum+=candy_count;
      bags.erase(last_it);
      bags.insert(candy_count/2);
    }
    cout<<sum<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    string s;
    set<string> s1;
    for(int i=0;i<n;i++){
        cin>>s;
        s1.insert(s);
    }
   // set<string>::iterator it;

    for(auto value:s1){

        cout<<value<<endl;

    }

    }

}
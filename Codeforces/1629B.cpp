#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r,k;
        cin>>l>>r>>k;
        long long cnt=(r-l+1)-r/2+(l-1)/2;
        if(cnt<=k){
            cout<<"YES"<<endl;
        }
        else if(l>1&&l==r){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
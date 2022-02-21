#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;++i){
            cin>>a[i];
           // ans|=a[i];
        }
        long long ans=a[0];
        for(long long i=1;i<n;++i){
           ans|=a[i];
        }
        cout<<ans<<endl;
    }
}
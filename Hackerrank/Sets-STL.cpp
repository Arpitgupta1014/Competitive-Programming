#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    set<ll> st;
    while(t--){
        ll y,x;
        cin>>y>>x; 
        if(y==1){
            st.insert(x);
        }
        else if(y==2){
            st.erase(x);
        }
        else if(y==3){
            auto it=st.find(x);
            if(it==st.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}

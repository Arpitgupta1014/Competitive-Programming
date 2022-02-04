#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        for(int j=0;j<n;++j){
            cin>>b[j];
        }
        for(int k=0;k<n;++k){
            if(a[k]>b[k]){
                swap(a[k],b[k]);
            }
    }

    cout<<(*max_element(a.begin(),a.end()))*(*max_element(b.begin(),b.end()))<<endl;
}
}
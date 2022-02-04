#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;      
        if(n%7==0){
            cout<<n<<endl;
        }
        else{
            for(int i=(n/10)*10;i<((n/10)+1)*10-3;++i){
                if(i%7==0){
                    cout<<i<<endl;
                }  
            }
        }
    }
}
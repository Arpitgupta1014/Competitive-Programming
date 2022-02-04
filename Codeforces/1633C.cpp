#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int count=0,ch,cd,mh,md,k,w,a;
        cin>>ch>>cd>>mh>>md>>k>>w>>a;
        for(long long int i=0;i<=k;++i){
            long long int n1=mh/((w*i)+cd);
            long long int n2=((a*(k-i))+ch)/md;
            if(((a*(k-i))+ch)%md){
                n2++;
            }
            if(mh%((w*i)+cd)){
                n1++;
            }
            if(n2>=n1){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
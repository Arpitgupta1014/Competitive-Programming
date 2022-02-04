#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int count_zero=0,count_one=0;
        string str;
        cin>>str;
        for(int i=0;i<str.size();++i){
            if(str[i]=='1'){
                count_one++;
            }
            else{
                count_zero++;
            }
        }
       
        if(count_zero==count_one&&str.length()>2){
            if(str.back()=='1') cout<<min(count_one,count_zero-1)<<endl;
            else cout<<min(count_one-1,count_zero)<<endl;
            
        }
        else if(count_zero==count_one&&str.length()<=2){
            cout<<"0"<<endl;
        }
        else if(count_zero<count_one){
            cout<<count_zero<<endl;
        }
        else{
            cout<<count_one<<endl;
        }
    }
}
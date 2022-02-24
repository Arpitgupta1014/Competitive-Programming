#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int x=1;
        map<char,int> mp;
        for(int i=0;i<str.length();++i){
            if(str[i]>96){
                if(str[i]>122){
                    mp[str[i]]=0;
                }
               else{
                   mp[str[i]]=1;
               }
            }
            else{
                if(str[i]=='B'){
                    if(mp['b']!=1){
                        x=0;
                        break;
                    }
                    else{
                      continue;
                    }
                }
                else if(str[i]=='R'){
                     if(mp['r']!=1){
                        x=0;
                        break;
                    }
                    else{
                       continue;
                    }
                }
                else{
                    if(mp['g']!=1){
                       x=0;
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        if(x<1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
}
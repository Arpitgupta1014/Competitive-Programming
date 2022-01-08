#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            for(int i=-n/2;i<=n/2;++i){
                cout<<i<<" ";
            }
          cout<<endl;
        }
      else{
          for(int i=-n/2;i<=n/2;++i){
              if(i==0){
                 continue;
              }
              else{
                  cout<<i<<" ";
              }
          }cout<<endl;
          }  
    }
    return 0;
}
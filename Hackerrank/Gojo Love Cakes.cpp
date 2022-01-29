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
        int n,count1=0,count2=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        for(int i=0;i<n;++i){
            if(a[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        if(count1==count2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

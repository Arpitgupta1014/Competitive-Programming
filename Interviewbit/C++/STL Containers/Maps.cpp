#include<iostream>
#include<map>
using namespace std;

int main()  {
    int q;
    cin>>q;
    map<int, int> b_mp;
    while(q--){
        int type;
        cin>>type;
        if(type == 1){
            int x, y;
            cin>>x>>y;
            b_mp[x] += y;
        }
        else if(type == 2){
            int x;
            cin>>x;
            b_mp[x] = 0;
        }
        else{
            int x;
            cin>>x;
            cout<<b_mp[x]<<endl;
        }
    }
    return 0;
}
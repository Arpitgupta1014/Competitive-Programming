#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll excel_Number(string s) {
    ll i,k= 0;
    for(i=0;i<s.size();++i) {
        (k=k*26)%mod;
        k = (k+(s[i]-'A'+1)%mod)%mod;
        
    }
    return k;
}
int main()
{
    ll t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        cout << excel_Number(str) <<endl;
    }
    return 0;
}

/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    const unsigned int M = 1000000007;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // int i;
        long long i,n=0;
        long long l = s.length();
        for(i=0;i<l;i++){
            n = ((26*n)%M + s[i]-64)%M;
        }
        cout<<n<<endl;
    }
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,sum=0,x=0;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            (sum=sum*26)%mod;
            sum=(sum+((s[i]-'A'+1))%mod)%mod;
        }
        cout<<sum<<endl;
        
       
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define in                   insert
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
#define N 100006

int main(){
    //fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,sum=0;
    cin>>n;
    ll a[n];
    fr(i, n)cin>>a[i];

    asort(a);
    if(a[0]==a[n-1]){cout<<0<<endl;return 0;}
    ll ans;
    fr(i, 301)
    {
        d=abs(a[0]-i );
        cnt=1;
        fr1(j, n-1)
        {
            if( !( a[j]+d==i or a[j]-d==i or a[j]==i )   ){cnt=0; break;}
        }
        if(cnt){cout<<d<<endl;return 0;}
    }

    cout<<-1<<endl;
return 0;
}

#include<iostream>
using namespace std;
#define ll long long int

ll T[100000000];

void init()
{
for (int i = 0; i < 100000000; i++)
{
    T[i] = 0;
}
}
    

ll program(ll n)
{
    if(n<12)
    {
        T[n] = n;
        return T[n];
    }
    if(n<100000000 && T[n] != 0)
        return T[n];
    ll a, b, c, s;
    a = n/2;
    b = n/3;
    c = n/4;
    s = program(a) + program(b) + program(c);
    if(n<100000000)
    {
        if(s > n)
            T[n] = s;
        else
            T[n] = n;
        return T[n];
    }
    return s;
}

int main() {
    init();
    ll n;
    while(scanf("%lld", &n) != EOF){        
        ///cin >>n;
        cout << program(n) << "\n";
    }
	return 0;
}

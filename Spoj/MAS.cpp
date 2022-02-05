#include <bits/stdc++.h>
using namespace std;

const int me = 100025;
const long long mod = 2760727302517LL;

int T, N, Q;
int type, x, v;
long long sum, square_sum;
long long a[me];

long long mul(long long a, long long b){
    if(b == 0)
        return 0;
    if(b & 1)
        return (mul(a, b - 1) + a) % mod;
    long long half = mul(a, b >> 1);
    return (half + half) % mod;
}

void add(int pos, long long value){
    value %= mod;
    sum = (sum + mod - a[pos]) % mod;
    sum = (sum + value) % mod;
    square_sum = (square_sum + mod - mul(a[pos], a[pos])) % mod;
    square_sum = (square_sum + mul(value, value)) % mod;
    a[pos] = value;
}

int main() {
    cin>>T;
    for(int cases = 0; cases < T; cases ++){
        cin>>N>>Q;
        for(int i = 1; i <= N; i ++)
            cin>>a[i];
        
        sum = 0, square_sum = 0;
        for(int i = 1; i <= N; i ++){
            sum = (sum + a[i]) % mod;
            square_sum = (square_sum + a[i] * a[i]) % mod;
        }
        
        cout<<cases + 1<<endl;
        
        while(Q --){
            cin>>type;
            if(type == 1){
                cin>>x>>v;;
                add(x, v);
            }
            else if(type == 2){
                cin>>x>>v;
                add(x, a[x] + v);
            }
            else{
                long long result = (1LL * N * square_sum % mod - mul(sum, sum) + mod) % mod;
                cout<<result<<endl;
            }
        }
    }
    
    return 0;
}
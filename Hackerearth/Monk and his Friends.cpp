#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
long long n, m;
unordered_set<long long> s;
cin >> n >> m;
for(int i=0; i<(n+m); ++i){
long long x;
cin >> x;
if(i<n){
s.insert(x);
}else{
auto it = s.find(x);
if(it == s.end()){
cout << "NO"<<endl;
s.insert(x);
}
else{
cout << "YES"<<endl;
}
}
}
}
}
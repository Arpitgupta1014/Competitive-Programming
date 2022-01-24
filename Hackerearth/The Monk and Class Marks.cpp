#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
map<int,multiset<string>> m;
while(n--){
 int mark;
 string name;
 cin>>name>>mark;
 m[-mark].insert(name);
}

for(auto &pair : m){
 auto &student=pair.second;
 auto &marks=pair.first;
 for(auto &names : student){
  cout<<names<<" "<<-marks<<endl;
 }

}
return 0;

}
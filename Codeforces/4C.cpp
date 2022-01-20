#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;

int main(){
   int n;
   cin>>n;
   map<string,int> m;
   for(int i=0; i<n; i++){
      string s; cin>>s;
	  map<string,int>::iterator it=m.find(s);
	  if (it==m.end()){
	     puts("OK");
		 m[s]=1;
	  }
	  else{
	     cout<<s<<(it->second)<<endl;
		 it->second++;
	  }
   }
}

#include<iostream>

using namespace std;

int main()  {
    int x, y;
    cin>>x>>y;
    // YOUR CODE GOES HERE
    string ans = ( x <= y )? "Robin" : "Rahul";
    cout<<ans<<endl;
    return 0;
}
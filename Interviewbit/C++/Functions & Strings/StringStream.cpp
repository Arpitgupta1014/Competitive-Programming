/*
#include<iostream>
#include<sstream>
using namespace std;
*/

int main()  {
    string A;
    cin>>A;
    stringstream ss(A);
    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        cout<<substr<<endl;
    }
    
    return 0;
}
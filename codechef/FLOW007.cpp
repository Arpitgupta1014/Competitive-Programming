#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int reverse_string=0;
        while(n>0){
            int last_digit=n%10;
            reverse_string=(reverse_string*10) + last_digit;
            n=n/10;
        }
        cout<<reverse_string<<endl;
    }
	return 0;
}

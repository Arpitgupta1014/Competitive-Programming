#include<iostream>
#include<cmath>
using namespace std;

int main()  {
    float A = 12.56, B = 5.12;
    // Print the sum of cube of both A and B, and store it in float variable named "cube_val"
    float cube_val=pow(A,3) + pow(B,3);
    cout<<cube_val<<endl;
    
    // Print the square root of cube_val, and store it in float variable named "sq_val"
    cout<<sqrt(cube_val)<<endl;
    float sq_val=sqrt(cube_val);
    
    // Print the sin of sq_val
    cout<<sin(sq_val)<<endl;
    
    return 0;
}
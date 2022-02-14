int main()  {
    int a, b;
    cin>>a>>b;
    
    // call function division(a, b)
    // print the result in try else exception in catch
    // Your code goes here
    try {
      int z = division(a, b);
      cout << z << endl;
   } catch (char const* msg) {
     cout << msg << endl;
   }
    
    return 0;
}
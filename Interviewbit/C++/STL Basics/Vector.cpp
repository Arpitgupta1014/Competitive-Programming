
int main()  {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin>>v[i];
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x);
    sort(v.begin(), v.end());
    for(int i = 0; i <n-1;++i){
        cout<<v[i]<<endl;
    }
    
    return 0;
}
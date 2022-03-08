int Solution::solve(vector<string> &A) {
    int arr[26]={0};
    for(int i=0;i<A.size();i++){
        for(auto c : A[i]){
            arr[c-'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(arr[i]==0) return 0;
    }
    return  1;
}
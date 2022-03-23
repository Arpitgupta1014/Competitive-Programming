int Solution::solve(vector<int> &A) {
int n= A.size();
int min=*min_element(A.begin(),A.end());
int max=*max_element(A.begin(),A.end());
return max+min;
}


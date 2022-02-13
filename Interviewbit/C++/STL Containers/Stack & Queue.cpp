vector<int> solve(vector<int> &A, int B){
    int n = A.size();
    assert(B <= n);
    vector<int> C;
    C.resize(n - B + 1);
    deque<int> Q;
    for (int i = 0; i < B; i++) {
        while (!Q.empty() && A[i] >= A[Q.back()])
            Q.pop_back();
        Q.push_back(i);
    }
    for (int i = B; i < n; i++) {
        C[i - B] = A[Q.front()];
        while (!Q.empty() && A[i] >= A[Q.back()])
            Q.pop_back();
        while (!Q.empty() && Q.front() <= i - B)
            Q.pop_front();
        Q.push_back(i);
    }
    C[n - B] = A[Q.front()];
    return C;
}


int Solution::solve(int A, int B) {
   return min(B-1,A-1) + min(8-B,A-1) + min(8-B,8-A) + min(B-1,8-A);
   }

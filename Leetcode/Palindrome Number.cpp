class Solution {
public:
   bool isPalindrome(int x) {
	if (x < 0) {
		return false;
	}
	int len = 0;
	int tmpx = x;
	while (tmpx != 0) {
		tmpx /= 10;
		len++;
	}
	int L = 0, R = len - 1;
	while (L <= R) {
		if (L == R) {
			return true;
		}

	if (int(x / pow(10, L)) % 10 != int(x / pow(10, R)) % 10) {
			return false;
		}
		L += 1;
		R -= 1;
	}
	return true;
}
};

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	int res = 0;
	string ans = "";
	for (int i = 0; i < n - 1; i++) {
		int cur = 0;
		for (int j = 0; j < n - 1; j++) {
			// check if the current two-gram that is being iterated upon by the outer loop
			// is the equal to the two-gram that is being iterated upon by the inner loop
			if (s[j] == s[i] && s[j + 1] == s[i + 1]) {
				// increment 'cur'
				++cur;
			}
		}
		if (res < cur) {
			// if 'res' is STRICTLY less than 'cur', then set the value of 'res' to 'cur'
			res = cur;
			// store the current and next characters in the 'ans' variable
			ans = string(1, s[i]) + string(1, s[i + 1]);
		}
	}
	cout << ans << '\n';
	return 0;
}

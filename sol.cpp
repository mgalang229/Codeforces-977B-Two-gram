#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	int maximal_number = INT_MIN;
	string final_two_gram = "";
	auto GetTwoGram = [&](char a, char b) {
		string two_gram = "";
		two_gram += a;
		two_gram += b;
		return two_gram;
	};
	for (int i = 0; i < n - 1; i++) {
		int cnt = 0;
		for (int j = 0; j < n - 1; j++) {
			if (i == j) {
				continue;
			}
			if (GetTwoGram(s[i], s[i + 1]) == GetTwoGram(s[j], s[j + 1])) {
				// count the number of frequency of the current two-gram
				// that is being iterated upon (increment 'cnt')
				cnt++;
			}
		}
		if (cnt > maximal_number) {
			// if 'cnt' is STRICTLY greater than 'maximal_number', then
			// set the value of 'maximal_number' to 'cnt and store the
			// current two-gram string in the 'final_two_gram'
			maximal_number = cnt;
			final_two_gram = GetTwoGram(s[i], s[i + 1]);
		}
	}
	cout << final_two_gram << '\n';
	return 0;
}

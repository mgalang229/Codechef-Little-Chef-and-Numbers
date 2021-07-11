#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		long long c = 0;
		long long c2 = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a == 2) {
				// count the number of 2's
				c2++;
			} else if (a > 2) {
				// count the number that are STRICTLY greater than 2
				c++;
			}
		}
		// get the sum of the product of 'c2' and 'c' (valid pairs) and the number of pairs
		// created from numbers that are STRICTLY greater than 2
		cout << (c2 * c) + ((c * (c - 1)) / 2) << '\n';
	}
	return 0;
}

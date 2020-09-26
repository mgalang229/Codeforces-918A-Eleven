#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int n1 = 0, n2 = 1;
	int next = n1 + n2;
	vector<int> v;
	while (next <= n) {
		v.emplace_back(next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}
	for (int i = 1; i <= n; i++) {
		bool ok = false;
		for (auto x : v) {
			if (x == i) {
				ok = true;
				break;
			}
		}
		cout << (ok ? 'O' : 'o');
	}
	cout << '\n';
	return 0;
}

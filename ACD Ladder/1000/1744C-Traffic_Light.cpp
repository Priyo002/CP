#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define endl '\n'
#define sort(X) sort(X.begin(),X.end())
const int mod = 1e9 + 7;
const long long INF = 1e18;

void init() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
}

void solve() {
	int n;
	cin >> n;
	char ch;
	cin >> ch;
	string s;
	cin >> s;
	if (ch == 'g') {
		cout << 0 << endl;
		return;
	}
	s += s;
	int idx = -1;
	for (int i = s.size() - 1; i >= n; i--) {
		if (s[i] == 'g') idx = i;
	}
	vector<int> arr(n, -1);
	int ans = INT_MIN;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == 'g') idx = i;
		if (s[i] == ch) {
			arr[i] = idx;
			ans = max(ans, idx - i);
		}
	}
	cout << ans << endl;
}

int32_t main() {

	init();

	int t;
	cin >> t;
	while (t--)
		solve();

}
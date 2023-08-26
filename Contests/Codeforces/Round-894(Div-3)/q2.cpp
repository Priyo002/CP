#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define endl '\n'
#define sort(X) sort(X.begin(),X.end())
const int mod = 1e9 + 7;
const int INF = 1e18;

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
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	if (n == 1) {
		cout << 1 << endl;
		cout << arr[0] << endl;
		return;
	}
	vector<int> v;
	v.pb(arr[0]);
	for (int i = 1; i < n; i++) {
		if (arr[i] >= arr[i - 1]) {
			v.pb(arr[i]);
		}
		else {
			if (arr[i] - 1 != 0)
				v.pb(arr[i] - 1);
			else v.pb(arr[i]);
			v.pb(arr[i]);
		}
	}
	cout << v.size() << endl;
	for (auto x : v) cout << x << " ";
	cout << endl;
}

int32_t main() {

	init();

	int t;
	cin >> t;
	while (t--)
		solve();

}
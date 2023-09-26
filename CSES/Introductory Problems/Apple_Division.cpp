#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb emplace_back
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
	vector<int> v(n);
	for (auto&x : v) cin >> x;
	int total = accumulate(v.begin(), v.end(), 0ll);
	int ans = INT_MAX;
	for (int i = 0; i < (1 << n); i++) {
		int k = 0;
		int temp = i;
		int sum = 0;
		while (temp) {
			if (temp & 1) sum += v[k];
			k++;
			temp = (temp >> 1);
		}
		ans = min(ans, abs(abs(total - sum) - sum));
	}
	cout << ans;
}

int32_t main() {

	init();
	// clock_t time_req;
	// time_req = clock();


	solve();

	// time_req = clock() - time_req;
	// cout << endl << "Time Taken is ";
	// cout << (float)time_req / CLOCKS_PER_SEC << " Seconds" << endl;

}
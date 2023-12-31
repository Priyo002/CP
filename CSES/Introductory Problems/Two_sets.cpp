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
	int k = (n * (n + 1));
	if (k % 4 != 0) cout << "NO";
	else {
		cout << "YES" << endl;
		vector<int> a, b;
		bool f = false;
		while (n > 0) {
			if (f == false) {
				if (n) {
					a.pb(n);
					n--;
				}
				else break;
				if (n) {
					b.pb(n);
					n--;
				}
				else break;
				f = true;
			}
			else {
				if (n) {
					b.pb(n);
					n--;
				}
				else break;
				if (n) {
					a.pb(n);
					n--;
				}
				else break;
				f = false;
			}
		}
		cout << a.size() << endl;
		for (auto x : a) {
			cout << x << " ";
		}
		cout << endl;
		cout << b.size() << endl;
		for (auto x : b) {
			cout << x << " ";
		}
	}
}

int32_t main() {

	init();
	// clock_t time_req;
	// time_req = clock();

	// int t;
	// cin >> t;
	// while(t--)
	solve();

	// time_req = clock() - time_req;
	// cout << endl << "Time Taken is ";
	// cout << (float)time_req / CLOCKS_PER_SEC << " Seconds" << endl;

}
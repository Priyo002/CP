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



int32_t main() {

	init();
	//clock_t time_req;
	//time_req = clock();

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = 0;
	set<int> st;
	int i = 0, j = 0;
	while (i < n && j < n) {
		while (j < n && !(st.count(arr[j]))) {
			st.insert(arr[j]);
			ans = max(ans, j - i + 1);
			j++;
		}
		while (j < n && st.count(arr[j])) {
			st.erase(arr[i]);
			i++;
		}
	}
	cout << ans;
	//time_req = clock() - time_req;
	//cout << endl << "Time Taken is ";
	//cout << (float)time_req / CLOCKS_PER_SEC << " Seconds" << endl;

}
#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	char last = 'a' - 2;
	int ans = 0;
	int len = 0;
	for (int i = 0; i < n; i++)
		if (s[i] >= last + 2)
		{
			last = s[i];
			ans += s[i] - 'a' + 1;
			len++;
			if (len >= k) {
				cout << ans;
				return 0;
			}

		}
	cout << -1;

}
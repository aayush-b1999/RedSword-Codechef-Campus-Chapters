#include <bits/stdc++.h>
#define ll long long
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define Fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define deb(x) cout<<#x<<" "<<x<<endl;
#define all(v) v.begin(),v.end()
#define endl '\n'
using namespace std;

void judge() {
#ifndef ONLINE_JUDGE
	FILE_READ_IN
	FILE_READ_OUT
#endif
}

int main() {
	Fast;
	int t = 1;
	judge();
	// cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 1];
		int b[n + 1];
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			a[c] = i;
		}
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			b[c] = i;
		}
		unordered_map<int, int> ans;
		int ret = 0;
		for (int i = 1; i <= n; i++) {
			a[i] -= b[i];
			if (a[i] < 0)a[i] += n;
			ans[a[i]]++;
			ret = max(ret, ans[a[i]]);
		}
		cout << ret << endl;
	}
}
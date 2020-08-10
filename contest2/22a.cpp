#include <bits/stdc++.h>
using namespace std;
int n;
bool ok;
char Way[26];
int a[13][13];
void back_track(int u = 1, int v = 1, int k = 1) {
	if(u == n && v == n) {
		ok = false;
		for(int i = 1; i <= k; ++i) cout << Way[i];
		cout << ' ';
		return ;
	}
	if(a[u + 1][v]) {
		Way[k] = 'D';
		back_track(u + 1, v, k + 1);
	}
	if(a[u][v + 1]) {
		Way[k] = 'R';
		back_track(u, v + 1, k + 1);
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		for(int i = 1; i <= n; ++i) {
			for(int j = 1; j <= n; ++j) a[i][j] = 0;
		}
		ok = true;
		cin >> n;
		for(int i = 1; i <= n; ++i) {
			for(int j = 1; j <= n; ++j) cin >> a[i][j];
		}
		if(a[1][1] == 0) {
			cout << -1 << '\n';
			continue;
		}
		back_track();
		if(ok) cout << -1;
		cout << '\n';
	}
}

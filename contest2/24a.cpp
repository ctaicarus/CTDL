#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[103];
bool b[103];
vector<vector<int>> res;
void back_track(int cnt = 1) {
	if(cnt == n + 1) {
		int sum = 0;
		for(int i = 1; i <= n; ++i) {
			if(b[i]) sum += a[i];
		}
		if(sum == k) {
			vector<int> ans;
			for(int i = 1; i <= n; ++i) {
				if(b[i]) ans.push_back(a[i]);
			}
			res.push_back(ans);
		}
		return ;
	}
	b[cnt] = true;
	back_track(cnt + 1);
	b[cnt] = false;
	back_track(cnt + 1);
}
bool cmp(vector<int> x, vector<int> y) {
	for(int i = 0; i < min(x.size(), y.size()); ++i) {
		if(x[i] > y[i]) return false;
		if(x[i] < y[i]) return true;
	}
	return x.size() < y.size();
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		res.clear();
		cin >> n >> k;
		for(int i = 1; i <= n; ++i) cin >> a[i];
		back_track();
		if(res.size()) {
			for(auto &x : res) {
				sort(x.begin(), x.end());
			}
			sort(res.begin(), res.end(), cmp);
			for(auto x : res) {
				cout << '[';
				for(auto y : x) cout << y << ' ';
				cout << ']' << ' ';
			}
		}
		else cout << -1;
		cout << '\n';
	}
}

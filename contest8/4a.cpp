#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;cin>>t;
	while (t--) {
		int k;cin>>k;
		priority_queue <int ,vector<int> > q;
		string s;cin>>s;
		if (k > s.size()) {
			cout<<"0\n";
			return 0;
		}
		int check[256]={0};
		for (int i=0;i<s.size();i++)	check[s[i]]++;
		for (int i=0;i<s.size();i++) {
			if (check[s[i]] != 0) {
				q.push(check[s[i]]);
				check[s[i]] = 0;
			}
		}
		while (k-- && !q.empty()) {
			int temp = q.top();
			temp--;
			q.pop();q.push(temp);
		}
		ll res=0;
		while (!q.empty()) {
			ll temp = q.top();
			res += temp * temp;
			q.pop();
		} 
		cout<<res<<'\n';
	}
	return 0;
}

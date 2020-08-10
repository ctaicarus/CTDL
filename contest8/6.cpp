#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long Solve(int n){
	deque <ll> q;
	q.push_front(9);
	bool ok = false;
	while (q.front() % n != 0){
		ll temp = q.front() * 10;
		q.push_back(temp);
		q.push_back(temp + 9);
		q.pop_front();
	}
	return q.front();
}
int main(){
	int t;cin>>t;
	while (t--) {
		int n;cin>>n;
		cout << Solve(n) << endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long n ;
void init(){
	cin >> n;
}
long long res(){
	queue<long long>q;
	q.push(1);
	while(q.front() % n != 0){
		int t = q.front();
		q.push(t*10);
		q.push(t*10+1);
		q.pop();
	}
	return q.front();
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}

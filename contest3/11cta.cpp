#include<bits/stdc++.h>
using namespace std;
long long n , a[1000001] , p = pow(10,9)+7;
void init(){
	cin >> n ;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
long long res(){
	long long ans = 0;
	priority_queue<long long , vector<long long> , greater<long long> >s;
	for(int i = 1 ; i <= n ; i++) s.push(a[i]);
	while(s.size() > 1){
		long long first = s.top() ; s.pop();
		long long second = s.top() ; s.pop();
		long long sum = (first + second) % p;
		ans = (ans + sum) % p;
		s.push(sum);
	}
	return ans;
}
int main(){
    int T;
    cin >> T;
    while(T--){
    	init();
	    if(n == 1) cout << a[1] << endl ;
        else cout << res() << endl;
	}
}

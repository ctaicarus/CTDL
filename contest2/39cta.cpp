#include<bits/stdc++.h>
using namespace std;
int n , k , d;
string s;
long long dp[1000001];
bool ok;
void init(){
	cin >> s >> k;
	n = s.length();
	dp[1] = n;
	d = 0;
	for(int i = 2 ; i <= 1000000 ; i++){
		dp[i] = dp[i-1] +dp[i-1];
	    d++;
	    if(dp[i] > k) break;
	}
}

char res(long long x , long long k){
	if(k < n) return s[k];
	if(k <= dp[x]/2 + 1) return res(x-1,k) ; else 
	return res(x-1,k-dp[x]/2-1);
	
}
// 1 2 3 4 5 5 1 2 3 4 / 9 , 9 , 3
int main(){
	int T; cin >> T;
	while(T--){
		init();
	    cout << res(d,k) << endl;
	}
}

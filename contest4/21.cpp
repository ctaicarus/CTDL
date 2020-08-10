#include<bits/stdc++.h>
using namespace std;
long long c = 1000000007;
long long res(long long a , long long b){
	if(b == 0) return 1;
	if(b == 1) return a % c;
	long long ans = res(a , b/2);
	if(b % 2 == 0) return ans * ans % c ; else return(ans * ans %c) * a % c;
}
int main(){
	int T;
	cin >>T;
	while(T--){
		long long a,b;
		cin >> a >> b;
		cout << res(a,b)<<endl;
	}
}


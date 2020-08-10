#include<bits/stdc++.h>
using namespace std;
int n , k ;
long long dp[100001] , p = pow(10,9) + 7;;

void Proc(){
    dp[1] = 1; dp[0] = 1;
    for(int i=2; i<= n; ++i){
        dp[i] = 0;
        for(int j = i-1; j >= 0 && j >= i - k ; --j){
            dp[i] = (dp[i] + dp[j]) % p;
        }
    }
    cout << dp[n] <<endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		Proc();
	}
}


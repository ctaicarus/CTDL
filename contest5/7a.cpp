#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int n , k;
ll dp[MAX];
void Init(){
    cin >> n >> k;
}
void Proc(){
    dp[1] = 1; dp[0] = 1;
    for(int i=2; i<= n; ++i){
        dp[i] = 0;
        for(int j=i-1; j >= 0 && j >= i - k ; --j){
            dp[i] = (dp[i] + dp[j]) % mod;
        }
    }
    cout << dp[n] <<endl;
}
int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}
/* ==> Shin <== */

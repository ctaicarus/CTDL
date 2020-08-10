#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int N , K;
ull ans = 0; // ket qua
void Init(){
    ans = 0;
    cin >> N >> K;
}
ull cnt(vector<vector<ull> > &dp, int num , int sum){ // mang dp[num][sum] = x , co x so co num chu so , tong chu so bang sum
    if(sum < 0) return 0;
    if(sum == 0 && num == 0)  return 1;
    if(num == 0)  return 0;
    if(dp[num][sum] != -1)
        return dp[num][sum];
    ull tmp = 0;
    for(int i=0 ; i< 10; ++i){
        tmp = (tmp + cnt(dp ,num-1, sum - i)) % mod; 
    }
    return dp[num][sum] = tmp;
}
void Proc(){
    vector<vector<ull>> dp (101, vector<ull>(50005,-1));   // dp[num][sum] : so luong so có num chu so và tong chu so = sum
    for(int i=1; i <= 9; ++i){  // tru di chu so dau tiên khác 0
        ans = (ans + cnt(dp ,N-1 , K-i)) % mod;
    }
    cout << ans << endl;
}
int main(){
    int t;
	cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

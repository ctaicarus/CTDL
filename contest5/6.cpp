#include<bits/stdc++.h>
using namespace std;
string s;
bool dp[1001][1001]; // doan gom các kí tu tu i den j cua S có/không là xau doi xung.
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> s;
		int n = s.length();
		int res = 1; // ket qua
		for(int i = 0 ; i < n ; i++) dp[i][i] = true;
		for(int k = 1 ; k <= n-1 ; k++){ // khoang cach
			for(int i = 0 ; i <= n - k - 1; i++){
				int j = i + k;
				if(k == 1) dp[i][j] = (s[i] == s[j]); else dp[i][j] = dp[i+1][j-1] and (s[i] == s[j]);
				if(dp[i][j]) res = max(res , j - i + 1);
			}
		}
		cout << res << endl;
	}
}


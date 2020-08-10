#include<bits/stdc++.h>
using namespace std;
string s[100000];
int main(){
	int T;
	cin >> T;
	while(T--){
		int n ;
		cin >> n;
		s[1] = "0";
		s[2] = "1";
		for(int i = 2 ; i <= n ; i++){
			int x = 0;
			for(int j = pow(2 , i-1) + 1 ; j <= pow(2 , i) ; j++){
				int t = pow(2 , i-1) - x;
				s[j] = "1" + s[t];
				x++;
			}
			for(int j = 1 ; j <= pow(2 , i-1) ; j++){
				s[j] = "0" + s[j];
			}
		}
		for(int i = 1 ; i <= pow(2 , n) ; i++){
			cout << s[i] << " ";
		}
		cout << endl;
	}
}


#include<bits/stdc++.h>
using namespace std;
int n , k;
bool c[51];
string res;
void Try(int i , string res){
	if(i == n) {
		cout << res[k-1] << endl;
	}
	for(int j = i + 1 ; j <= n ; j++){
		if(c[j]){
			c[j] = false;
			Try(i+1 , res + (char)(j + '0') + res );
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		res = "1";
		for(int i = 1 ; i <= n ; i++) c[i] =true;
		Try(1 , res);
	}
}


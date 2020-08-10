#include<bits/stdc++.h>
using namespace std;
long long n ;
int dx[] = {4 , 7};
char cx[] = {'4' , '7'};
bool check;
void Try(long long sum , string res ){
	if(sum == n){
		check = true;
		cout << res << endl;
		return;
	}
	if(sum > n){
		return;
	}
	for(int i = 1 ; i >= 0 ; i--){
		if(check) break;
		Try(sum + dx[i] , res + cx[i] );
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		check = false;
		for(int i = 0 ; i <= 1 ; i++){
			string res = "";
			Try(dx[i] , res + cx[i]);
			if(check) break;
		}
		if(check == false) cout << "-1\n"; 
	}
}


#include<bits/stdc++.h>
using namespace std;
int n , k;
bool check;
int dx[] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9}; 
char cx[] = {'1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};
void Try(int sum , int x , string res){
	if(check) return;
	if(x == k){
		if(sum == n){
			check = true;
			cout << res << endl;
			return;
		}
		return ;
	}
	if(sum > n) return ;
	if(x > k) return ;
	for(int i = 8 ; i >= 0 ; i--){
		if(check) break;
		Try(sum + dx[i] , x + 1 , res + cx[i]);
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		check = false;
		for(int i = 0 ; i < 9 ; i++){
			string res = "";
			Try(dx[i] , 1 , res + cx[i]);
			if(check) break;
		}
		if(!check) cout << "-1\n";
	}
}


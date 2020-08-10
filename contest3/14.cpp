#include<bits/stdc++.h>
#include<cmath>
using namespace std;
string s;
bool ok;
bool check(long long sum){ // kiem tra co phai so lap phuong khong
	long long x =  pow(sum ,(float)1/3);
	if(pow(x , 3) == sum) return true ; else return false;
}

void Try(int i , long long sum){
	if(i == s.length()) {
        if(sum != 0 && check(sum)){
        	ok = true;
        	cout << sum << endl;
		}
		return;
	}
	for(int j = 1 ; j >= 0 ; j--){
		if(ok) break;
		if(j == 1) Try(i+1 , sum * 10 + (s[i] - '0'));
		if(j == 0) Try(i+1 , sum );
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> s;
		ok = false;
		Try(0 , 0);
		if(!ok) cout << "-1\n";
       
	}
}


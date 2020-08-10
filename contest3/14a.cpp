#include<bits/stdc++.h>
using namespace std;
string s;
int n , a[20] ; // do dai xau , mang nhi phan
bool ok ;
bool check(long long sum){ // kiem tra co phai so lap phuong khong
    if(sum == 0) return false;
	long long x =  pow(sum ,(float)1/3);
	if(pow(x , 3) == sum ) return true; else return false;
}
long long sum(){ // tinh tong
	long long S = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] == 1) {
			S = S * 10 + (s[i] - '0') ;
		}
	}
	return S;
}
void init(){
	cin >> s;
	n = s.length();
	ok = false;
}
void Try(int i){
	for(int j = 1 ; j >= 0 ; j--){
		if(ok) break;
		a[i] = j;
		if(i == n - 1) {
		   if( check(sum()) ) {
		   	  cout << sum () << endl ;
		   	  ok = true;
		   }
		} else Try(i+1);
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		Try(0);
		if(!ok) cout << "-1" << endl;
	}
}


#include<bits/stdc++.h>
using namespace std;
int res , n ;
string s;
void init(){
	cin >> n >> s;
	n = s.length();
	res = 0;
}
bool check(string a[]){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i != j && a[i] != "" && a[i] == a[j] ) return true;
		}
	}
	return false;
}
long long ans(){
	for(int i = 1 ; i <= n ; i++){ // so ki tu cua xau con
	    string a[n+1];
		for(int j = 0 ; j <= n - i ; j++){ // ki tu bat dau
		    string x = "";
			for(int z = j ; z <= j + i - 1 ; z++){ // lap i ki tu lien tiep
				x = x + s[z] ;
			}
			a[j] = x;
		}
		if(check(a)) res = max(res , i);
	}
	return res;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << ans() << endl;
	}	
}


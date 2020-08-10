#include<bits/stdc++.h>
using namespace std;
int n , m , a[1000001] , b[1000001];
string res(string a , string b){ // nhan 2 so  duong lon
	int n = a.length() , m = b.length() , l = n+m;
	int tik[l];
	for(int i = 0 ; i < l ; i++) tik[i] = 0;
	for( int i = m-1 ; i >= 0 ; i-- ){ // b
		for( int j = n-1 ; j >= 0 ; j--){ // a
			tik[i+j+1] = tik[i+j+1] + (a[j] - '0') * (b[i] - '0');
		}
	}
	for(int i = l-1 ; i >= 1 ; i--){
		if(tik[i] > 9) {
			tik[i-1] += tik[i]/10;
			tik[i] %= 10; 
		}
	}
	string result = "";
	for(int i = 0 ; i < l ; i++)
	  result += tik[i] + '0';
	 if(result[0]=='0') result.erase(result.begin() + 0);
	 return result;
}
void init(){
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < m ; i++) cin >> b[i];
	sort(a , a+n);
	sort(b , b+m);
}
string intToString(int n){
	string x = "";
	while(n){
		int d = n % 10;
		char c = d + '0';
		x = c + x;
		n /= 10;
	}
	return x;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   bool c1 , c2;
	   if(a[n-1] > 0) c1 = true;else c1 = false;
	   if(b[0] > 0) c2 = true;else c2 = false;
	   a[n-1] = abs(a[n-1]);
	   b[0] = abs(b[0]);
	   string max = intToString(a[n-1]);
	   string min = intToString(b[0]);
	   if(c1 && !c2) cout << "-";
	   if(!c1 && c2) cout << "-";
	   cout << res(max , min) << endl;
	}
}


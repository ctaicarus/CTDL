#include<bits/stdc++.h>
using namespace std;
string a , b;
int k;
long long heMuoi(string a){ // chuyen sang he 10
	long long s = 0;
	int n = a.length();
	int d = 0;
	for(int i = n-1 ; i >= 0 ; i--) {
		s = s + (a[i] - '0') * pow(k , d);
		d++;
	}
	return s;
}
void heK(long long s){
	string res = "";
	while(s){
		int x = s % k;
		char C = x + '0';
		res = C + res;
		s /= k;
	}
	cout <<  res << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> k >> a >> b;
		long long x = heMuoi(a) , y = heMuoi(b);
	//	cout << x << " " << y << endl;
        heK(x + y);
	}
}


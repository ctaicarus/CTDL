#include<bits/stdc++.h>
using namespace std;
string a , b;
long long heMuoi(string a){ // chuyen sang he 10
	long long s = 0;
	int n = a.length();
	for(int i = 0 ; i <= n - 1 ; i++) s = s + (a[i] - '0') * pow(2 , n - i - 1);
	return s;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> a >> b;
		cout << heMuoi(a) * heMuoi(b) << endl;
	}
}


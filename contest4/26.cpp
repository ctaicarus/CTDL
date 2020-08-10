#include<bits/stdc++.h>
using namespace std;
int k;
string a , b;
void sameLength(){ // cho 2 xau cung do dai
	int l1 = a.length() , l2 = b.length();
	int x = abs(l1 - l2);
	string s = "";
	for(int i = 1 ; i <= x ; i++) s = s + '0';
	if(l1 > l2) b = s + b ; else a = s + a;	
}
void sumOfTwoString(){ // tinh tong
	int x = 0; // bien nho
	int n = a.length() - 1; // bat dau tu cuoi xau
	int t[n+1]; // mang ket qua
	int d;
	for(int i = n ; i >= 0 ; i--){
		d = a[i]-'0' + b[i]-'0' + x;
		if(i != 0 && d < k) {
			t[i] = d;
			x = 0;
		}
		if(i != 0 && d >= k) {
			t[i] = d - k;
			x = 1;
		}
		if(i == 0) {
			if(d >= k){
				t[i] = d - k;
			    d = 1;
			} else t[i] = d;
		}
	}
	if(d != 0) cout << d;
	for(int i = 0; i < a.length(); i++)
	cout << t[i];
	cout << endl;
}
int main(){
	cin >> k >> a >> b;
	sameLength();
	sumOfTwoString();
}


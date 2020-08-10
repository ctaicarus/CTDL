#include<bits/stdc++.h>
using namespace std;
string s;
int a[257];
void init(){
	cin >> s;
	for(int i = 0 ; i < 257 ; i++) a[i] = 0;
	for(int i = 0 ; i < s.length() ; i++) a[s[i]]++; // dem so lan xuat hien
}
bool res(){
	int n = s.length();
	sort(a , a + 257);
	int max = a[256]; // ki tu lap lai so lan nhieu nhat
	int vs = 0; // vi tri bat dau
	for(int i = 1 ; i < max ; i++){
		vs = vs + 2; // vi tri tiep theo cach 2 o
		if(vs >= n) return false;
	}
	return true;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		if(res()) cout << "1\n" ; else cout << "-1\n";
	}
}


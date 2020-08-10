#include<bits/stdc++.h>
using namespace std;
int k ;
string s;
int a[257];
void init(){
	cin >> k >> s;
	for(int i = 0 ; i < 257 ; i++) a[i] = 0;
	for(int i = 0 ; i < s.length() ; i++) a[s[i]]++; // dem so lan xuat hien
}
bool res(){
	int n = s.length();
	sort(a , a + 257);
	int max = a[256]; // ki tu lap lai so lan nhieu nhat
	int vt = 0; // vi tri bat dau
	for(int i = 1 ; i < max ; i++){
		vt = vt + k; // vi tri tiep theo
		if(vt > n) return false;
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


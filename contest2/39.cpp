#include<bits/stdc++.h>
using namespace std;
string s;
int n;
string conver(string s){
	string x = "";
	x = x + s[s.length()-1];
	for(int i = 0 ; i < s.length()-1 ; i++) x = x + s[i];
	return x;
}
string res(){
	while(s.length() <= n ){
		s = s + conver(s);
	}
	return s;
}
int main(){
	cin >> s >> n;
//	cout << conver(s);
	res();
	cout << s[n-1] ;
}


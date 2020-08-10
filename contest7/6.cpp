#include<bits/stdc++.h>
using namespace std;
string s;
bool c[100];
bool check(int n , int m){
	c[n] = false;
	c[m] = false;
	for(int i = n+1 ; i < m ; i++){
		if(c[i]){
			c[i] = false;
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') return true; // khong thua
		}
	}
	return false; // thua
}
bool res(){ 
	vector<int> vsm; // vi tri cac ki tu mo ngoac ')';
	vector<int> vsd; // vi tri cac ki tu dong ngoac '(';
	int n = 0 ;// so ki tu '('
	for(int i = s.length()-1 ; i >= 0 ; i--){
		if(s[i] == ')') {
			vsd.push_back(i); // vi tri ')'
		}	
	}
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] == '(') {
			n++;
			vsm.push_back(i); // vi tri '('
		}
    }
	for(int i = n ; i >= 1 ; i--){
		if(!check(vsm[i-1],vsd[i-1])) return false; // thua
	}   
	return true; // khong thua
}
int main(){
	int T;
	scanf("%d\n" , &T );
	while(T--){
		getline(cin , s);
		for(int i = 0 ; i < s.length() ; i++) c[i] = true;
		if(!res()) cout << "Yes\n" ; else cout << "No\n";
	}
}


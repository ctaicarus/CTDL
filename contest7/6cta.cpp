#include<bits/stdc++.h>
using namespace std;
int c[100];
string s;
void init(){
	cin >> s;
	for(int i = 0 ; i < s.length() ; i++) c[i] = true;
}
bool check(int n , int m){
	c[n] = false ; c[m] = false;
	for(int i = n+1 ; i <= m-1 ; i++){
		if(c[i]){
			c[i] = false;
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') return false;
		}
	}
	return true;
}
bool res(){
	stack<int>q;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] == '('){
			q.push(i); // vi tri mo ngoac
		}
		if(s[i] == ')'){
			if(check(q.top() , i)) return true;
			q.pop(); 
		}
	}
	return false;
}
int main(){
	int T;
	scanf("%d\n" , &T );
	while(T--){
		init();
		if(res()) cout << "Yes\n" ; else cout << "No\n";
	}
}

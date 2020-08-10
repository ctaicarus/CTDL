#include<bits/stdc++.h>
using namespace std;
string s ;
int n ; // so ki tu '('
void init(){
	getline(cin , s);
	n = (s.length()+1)/2;
}
void res(){
	int d = 0 , m = 0 , ans = 0; // dong ngoac , mo ngoac , ket qua
	int i ;
	for( i = 0 ; i < s.length() ; i++){
		if(s[i] == '(') m++; else if(s[i] == ')') d++;
		if(m == n) break;
		if(s[i] == ')' && d > m){
			s[i] = '(';
			d--;
			m++;
			ans++;
			if(m == n) break;
		}
	}
	if(i + 1 < s.length()){
		for(int j = i+1 ; j < s.length() ; j++){
			if(s[j] == '('){
				s[j] = ')';
				ans++;
			}
		}
	}
//	cout << s << endl;
	cout << ans << endl;
}
int main(){
	int T;
	scanf("%d\n",&T);
	while(T--){
	   init();
	   res();
	}
}


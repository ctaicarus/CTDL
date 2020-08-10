#include<bits/stdc++.h>
using namespace std;
string s1 , s2;
void init(){
	cin >> s1 >> s2;
}
void change(string &s , int n , int m){
	s[n] = ' ';
	s[m] = ' ';
	if(s[n-1] == '-'){
		for(int i = n+1 ; i < m ; i++){
			if(s[i] == '+') s[i] = '-'; else if(s[i] == '-') s[i] = '+';
		}
	}
}

string res(string &s){ 
    stack<char> c;
	int vtm , vtd; // vi tri mo , vi tri dong
	for(int i = 0 ; i < s.length() ; i++){
       if(s[i] == '(') {
       	    c.push(s[i]);
	   }		
	}
	while(!c.empty()){
		for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(') {
       	        vtm = i;
	        }
            if(s[i] == ')') {
       	       vtd = i;
       	       c.pop();
       	       change(s , vtm , vtd);
       	       break;
	       }
        }
	}
	string ans = "";
	for(int i = 0 ; i < s.length() ; i++)
	if(s[i] != ' ') ans = ans + s[i];
	return ans;
}

int main(){
	int T;
	scanf("%d\n",&T);
	while(T--){
	   init();
	   if(res(s1) == res(s2)) cout << "YES\n"; else cout << "NO\n";
	}
}


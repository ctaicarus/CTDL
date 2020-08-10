#include<bits/stdc++.h>
using namespace std;
string s;
void init(){
	cin >> s;
	s = ' ' + s;
}
void change(int n , int m){
	s[n] = ' ';
	s[m] = ' ';
	if(s[n-1] == '-'){
		for(int i = n+1 ; i < m ; i++){
			if(s[i] == '+') s[i] = '-'; else if(s[i] == '-') s[i] = '+';
		}
	}
}
void display(){
	for(int i = 0 ; i < s.length() ; i++)
	if(s[i] != ' ') cout << s[i];
	cout << endl;
}
void res(){ 
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
       	       change(vtm , vtd);
       	       break;
	       }
        }
	}
}

int main(){
	int T;
	scanf("%d\n",&T);
	while(T--){
	   init();
	   res();
	   display();
	}
}


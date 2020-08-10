#include<bits/stdc++.h>
using namespace std;
/*
1. Kh?i ta?o Stack r?ng.

2. Kh?i ta?o 2 chu?i x va` token; i, j l?n lu?t la` index cu?a Infix va` Postfix.

3. Duy?t vo`ng l?p for tu i = 1 cho d?n cu?i chu?i Infix:
N?u Infix[i] la` toa´n ha?ng thi` dua va`o Postfix.
N?u Infix[i] la` toa´n t? thi` Push va`o ngan x?p S.
N?u Infix[i] la` “)” thi` Pop va`o ngan x?p S (l?y gia´ tri? trên di?nh cu?a S) sau do´ dua va`o Postfix.
Output: Postfix la` bi?u th?c h?u t?.
*/
string s , res;
void init(){
	cin >> s;
	res = "";
}
void convest(){
	stack<char>Stack;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') Stack.push(s[i]); 
		else if(s[i] == ')') {
			if(!Stack.empty())res = res + Stack.top();
			if(Stack.empty()) Stack.pop();
		}
		else if(s[i] != '(') res = res + s[i];
	}
	cout << res << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   convest();
	}
}


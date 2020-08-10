#include<bits/stdc++.h>
using namespace std;
string s , ans;
bool c[1001];
void init(){
	cin >> s;
	for(int i = 0 ; i < s.length() ; i++) c[i] = true;
	ans = "";
}
void xuli(int vtm , int vtd){
	c[vtm] = false;
	c[vtd] = false;
	string temp = ""; 
	for(int i = vtm+1 ; i < vtd ; i++){
		if(c[i]){
			temp = temp + s[i];
			c[i] = false;
		}
	}
	int i = vtm;
	temp = temp + ans;
	string t = temp;
	if(i-1 >= 0 && s[i-1] - '0' >= 1 && s[i-1] - '0' <= 9){
		c[i-1] = false;
		for(int k = 1 ; k < s[i-1] - '0'  ; k++){
			temp = temp + t; // lap lai s[i-1] lan
		}
	}

	ans = temp;
}
void res(){
	stack<int>Stack;
    for(int i = 0 ; i < s.length() ; i++){
    	if(s[i] == '[') Stack.push(i);
    	else if(s[i] == ']'){
    		int x = Stack.top();
    		Stack.pop();
    		xuli(x , i);
		}
	}
	cout << ans << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}


#include<bits/stdc++.h>
using namespace std;
string str , ans;
void init(){
	cin >> str;
	ans = "";
}
int check(char x){
	if(x == '*' || x == '/') return 2 ; else if(x == '+' || x == '-') return 1 ;
}
void res(){
	stack<char>s;
	int i = 0;
	for(int i = 0 ; i < str.length() ; i++){
		if(str[i] == '(') s.push(str[i]); 
		else
		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			if(s.top() != '(' && check(s.top()) >= check(str[i])) { // top la toan tu , co do uu tien lon hon
				ans += s.top(); 
				s.pop();
			}
			s.push(str[i]); // dua vao
		}
		else 
		if(str[i] == ')'){
			while(s.top() != '('){
				ans += s.top();
				s.pop();
			}
			s.pop(); // dua '(' ra khoi stack
		}
		else {
			ans += str[i];
		}
	}
	while(!s.empty()){
		ans += s.top();
		s.pop();
	}
	cout << ans;
}
int main(){
	int T;
    cin >> T;
	while(T--){
	   init();
	   res();
	   cout << endl;
	}
}


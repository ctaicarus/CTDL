#include<bits/stdc++.h>
using namespace std;
string str;
int check(){ // ((()()((()
	stack<char>s;
	int n = str.length();
	int dem = 0 , ans = 0 , d = 0 , m = 0;
	for(int i = 0 ; i < str.length() ; i++){
		if(str[i] == ')') d++; // dem so dong ngoac
	}
	for(int i = 0 ; i < str.length() ; i++){
		char x = str[i];
		if(x == '(') {
			m++;
			if(m <= d-1) s.push(x);
		}
		else
		if(!s.empty() && x == ')' ) {
			dem = dem + 1;
			d--; 
			s.pop();
		} 
		else
		if(s.empty() && x == ')' ) {
			dem = 0;
		}
		ans = max(ans , dem);			
	}
	return ans*2;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> str;
	    cout << check() << endl;
	}
}

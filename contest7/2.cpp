#include <bits/stdc++.h>
using namespace std;
int a[205], top = -1 , n;
string s;
void push() {
	top++;
	a[top] = n;
}
void pop() {
	if(top >= 0) top--;
}
void show() {
	if(top >= 0) {
	     cout << a[top] << endl;
	}
	else {
		cout << "NONE" << endl;
	}
}
int main() {
	int T;
	cin >> T;
	while(T--){
		cin >> s;
		if(s == "PUSH"){
			cin >> n;
			push();	
		} 
		else if(s == "POP") {
			pop();		
		}
		else if(s == "PRINT") {
			show();
		}
	}
 
 
	return 0;
}

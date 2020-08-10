#include<bits/stdc++.h>
using namespace std;
string str;
void init(){
	cin >> str;
	str = ' ' + str;
}
void res(){
	stack<int>s;
	for(int i = 0 ; i < str.length() ; i++){
		if(str[i] == '(') s.push(i);
		if(str[i] == ')'){
			int vt = s.top();
			s.pop();
			char x = str[vt-1];
			str[vt] = ' ' ; str[i] = ' ';
			if(x == '-'){
				for(int j = vt ; j <= i ; j++){
					if(str[j] == '-') str[j] = '+'; else if(str[j] == '+') str[j] = '-';
				}
			}
		}
	}

	for(int i = 0 ; i < str.length() ; i++){
		if(str[i] != ' ') cout << str[i];
	}
	cout << endl;
}
int main(){
	int t;
	cin>>t;
	while (t--) {
        init();
        res();
	}
}

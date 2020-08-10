#include<bits/stdc++.h>
using namespace std;
string s;
void init(){
	getline(cin , s);
	string v;
	int j = 0;
	while(j < s.length()){
		while(j < s.length() && s[j] != ' '){
			v = s[j] + v;
			j++;
		}
		j++;
		cout << v << " ";
		v = "";
	}
}
int main(){
	int T;
	scanf("%d\n" , &T);
	while(T--){
	   init();
       cout << endl;
	}
}


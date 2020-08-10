#include<bits/stdc++.h>
using namespace std;
string s;
long long n;

void Try(string s ){
	if(s.length() >= n) {
		cout << s << " ";
		cout << s[n-1];
		return ;
	}
	char c = s[s.length()-1];
	s.erase(s.size()-1 , 1);
	Try(s + c + c + s );
}
int main(){
	cin >> s >> n;
	Try(s );
}


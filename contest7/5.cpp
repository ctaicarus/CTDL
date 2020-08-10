#include<bits/stdc++.h>
using namespace std;
string str;
void res(){
	cin >> str;
	stack<int>s;
	int C[100000], D[100000];
	for(int i = 0 ; i < str.length() ; i++){
		char c = str[i];
		if(c == '(') s.push(i);
		else if(s.empty()){
			C[i] = -1;
			D[i] = -1;
		}
		else {
			D[i] = s.top();
			s.pop();
			if (str[D[i] - 1] == ')' && C[D[i] - 1] != -1) 
			    C[i] = C[D[i] - 1];
            else C[i] = D[i];
		}
	}
	for (int i = 0; i < str.length(); ++i) C[i] = i - C[i];
	int res = 0;
	for (int i = 0; i < str.length(); ++i) if (D[i] != -1 && str[i] == ')') res = max(res, C[i]);
	if(res == 0) cout << "0\n"; else cout << res + 1 << endl;

}
int main(){
	int T;
	cin >> T;
	while(T--){
	   res();
	}
}


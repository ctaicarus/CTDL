#include<bits/stdc++.h>
using namespace std;
int main(){
	int T , n ;
	string str;
	cin >> T;
	queue<int>s;
	while(T--){
	   cin >> str;
	   if(str == "PUSH"){
	   	   int x;
	   	   cin >> x;
	   	   s.push(x);
	   }
	   if(str == "POP"){
	   	   if(!s.empty()) s.pop();
	   }
	   if(str == "PRINTFRONT"){
	   	   if(!s.empty()) cout << s.front() << endl; else cout << "NONE\n";
	   }
	}
}


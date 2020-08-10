#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
bool c[10];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	for(int i = 0 ; i < 10 ; i++) c[i] = true;
}
void res(){
	priority_queue<int>s;
	for(int i = 1 ; i <= n ; i++){
		while(a[i] != 0){
			int x = a[i] % 10;
			if(c[x]) {
				s.push(x);
				c[x] = false;
			}
			a[i] /= 10;
		}
	}
	stack<int>sk;
	while(!s.empty()){
		sk.push(s.top());
		s.pop();
	}
	while(!sk.empty()){
		cout << sk.top() << " ";
		sk.pop();
	}
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


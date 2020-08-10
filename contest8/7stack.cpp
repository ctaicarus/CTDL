#include<bits/stdc++.h>
using namespace std;
long long n;
void res(){
	queue<long long>s;
	s.push(1);
	long long d = 0 , x , y;
	while(s.front() <= n){
		x = s.front() * 10;
		y = s.front() * 10 + 1;
		s.push(x);
		s.push(y);
		s.pop();
		d++;	
	}
	cout << d << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   cin >> n;
	   res();
	}
}


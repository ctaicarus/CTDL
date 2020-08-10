#include<bits/stdc++.h>
using namespace std;
long long k ;
string str; 
long long f[257] ;
void init(){
	cin >> k >> str;
	for(int i = 0 ; i <= 256 ; i++) f[i] = 0;
}
long long xuly(string str, long long k) { 
	int n = str.length(); 
	if (k >= n) 
		return 0;   
	for (int i=0; i<n; i++) 
		f[str[i]]++; 
	priority_queue<long long> pq; 
	for (int i=0; i<=256; i++) {
		cout << f[i] << " ";
		if(f[i] > 0)pq.push(f[i]); 
	}
		
	while(k-- && !pq.empty()) { 
		int t = pq.top(); 
		pq.pop(); 
		t = t-1; 
		if(t > 0) pq.push(t); 
	} 
	long long result = 0;
	while (!pq.empty()) { 
		int t = pq.top(); 
		result += t*t; 
		pq.pop(); 
	} 
	return result; 
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << xuly(str , k) << endl;
	}
}


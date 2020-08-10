#include<bits/stdc++.h>
using namespace std;
int k ;
string str;
const int maxc = 26; 
int xuly(string str, int k) { 
	int n = str.length(); 
	if (k >= n) 
		return 0;  
	int f[maxc] = {0}; 
	for (int i=0; i<n; i++) // bai 13
		f[str[i]-'A']++; 
	priority_queue<int> pq; //tuong tu bai 11
	for (int i=0; i<maxc; i++) 
		pq.push(f[i]); 
	while(k--) { 
		int t = pq.top(); 
		pq.pop(); 
		t = t-1; 
		pq.push(t); 
	} 
	int result = 0;
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
		cin >> k >> str;
		cout << xuly(str , k) << endl;
	}
}


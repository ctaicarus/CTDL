#include<bits/stdc++.h>
using namespace std;
long long n = 1 , k = 1 , s = 1 , d  ;
long long a[100];
void init(){
	d = 0;
	a[0] = 0;
}
bool check(){
	long long sum = 0;
	for(int i = 1 ; i <= k ; i++)
	 sum += a[i];
	if(sum == s) return true; else return false;
}
void Try(int i){
	for(int j = a[i-1]+1 ; j <= n-k+i ; j++){
		a[i] = j;
		if(i == k) {
			if(check()) d++;
		}
		else {
			Try(i+1);
		}		
	}
}
int main(){
	while(1 ){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		init();
		Try(1);
		cout << d << endl;
	}
}

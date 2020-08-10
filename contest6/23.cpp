#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] , sum;
void init(){
	cin >> n;
	sum = n * (n+1) / 2;
	int s = 0;
	for(int i = 0 ; i < n-1 ; i++) {
		cin >> a[i];
		s = s + a[i];
	}
	cout << sum - s << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	}
}


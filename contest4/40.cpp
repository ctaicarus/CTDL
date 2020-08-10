#include<bits/stdc++.h>
using namespace std;
int n , a[10000];
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		int d = 0;
		for(int i = 1 ; i <= n ; i++) {
			cin >> a[i];
			if(a[i] == 0) d++;
		}
		cout << d << endl;
	}
}


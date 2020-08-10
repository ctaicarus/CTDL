#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	sort(a , a+n);
	for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
	cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	}
}


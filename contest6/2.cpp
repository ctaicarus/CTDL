#include<bits/stdc++.h>
using namespace std;
long long n , x , a[100001];
void init(){
	cin >> n >> x;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
bool check(long long a , long long b){
	return abs(a-x) < abs(b-x);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		stable_sort(a , a+n,check); // du nguyen vi tri ban dau
		for(int i = 0 ; i < n ; i++)
		cout << a[i] << " ";
		cout << endl;
	}
}


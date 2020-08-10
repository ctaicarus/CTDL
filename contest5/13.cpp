#include<bits/stdc++.h>
using namespace std;
int n;
long long ugly[10001];
void arrUgly(){
	ugly[0] = 1;
	int i2 = 0 , i3 = 0 , i5 = 0;
	long long n2 = 2 , n3 = 3 , n5 = 5;
	long long next = 1;
	for(int vt = 1 ; vt <= 10000 ; vt++){
		next = min( min(n2 , n3 ), n5);
		ugly[vt] = next;
		if(ugly[vt] == n2){
			i2++;
			n2 = ugly[i2] * 2;
		}
		if(ugly[vt] == n3){
			i3++;
			n3 = ugly[i3] * 3;
		}
		if(ugly[vt] == n5){
			i5++;
			n5 = ugly[i5] * 5;
		}
	}
	
}
int main(){
	int T;
	cin >> T;
	arrUgly();
	while(T--){
		cin >> n;
		cout << ugly[n-1] << endl;
	//    for(int i = 0 ; i <= n ; i++) cout << ugly[i] << " ";
	}
}


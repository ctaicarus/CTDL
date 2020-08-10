#include<bits/stdc++.h>
using namespace std;
bool check(int n , int k ,int a[]){
	for(int i = 1 ; i <= k ; i++){
		if(a[i] != n-k+i) return false;
	}
	return true;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		int n , k;
		cin >> n >> k;
		int a[k+1];
		for(int i = 1 ; i <= k ; i++){
			cin >> a[i];
		}
		if(check(n , k , a)){
			for(int i = 1 ; i <= k ; i++){
				cout << i << " ";
			}
			cout << endl;
		} else {
			int i = k;
	        while(i>=1 && a[i] == n-k+i) i--;
	        a[i]++;
	        for(int j=i+1;j<=k;j++)
	            a[j]=a[j-1]+1;
			for(int i = 1 ; i <= k ; i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}
}


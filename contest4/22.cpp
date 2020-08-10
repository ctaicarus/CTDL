#include<bits/stdc++.h>
using namespace std;
int n , k , a[1000001];
int BinarySearch(int left, int right){ 
	if (left > right) return -1;
	int mid = (left + right) / 2;
	if (k == a[mid]) 
		return mid + 1;
	if (k < a[mid]) 
		return BinarySearch(left , mid-1);
	if (k > a[mid]) 
		return BinarySearch(mid+1 , right);
} 
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		if(BinarySearch(0 , n-1) != -1) cout << BinarySearch(0 , n-1) << endl; else cout << "NO\n"; 
	}
}


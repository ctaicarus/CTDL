#include<bits/stdc++.h>
using namespace std;
int n , x , a[1000001];
void init(){
	cin >> n >> x;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	sort(a , a+n);
}

int BinarySearch(int left, int right){ 
	if (left > right) return -1;
	int mid = (left + right) / 2;
	if (x == a[mid]) 
		return 1;
	if (x < a[mid]) 
		return BinarySearch(left , mid-1);
	if (x > a[mid]) 
		return BinarySearch(mid+1 , right);
} 
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   cout << BinarySearch(0 , n-1) << endl;
	}
}


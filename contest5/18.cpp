#include<bits/stdc++.h>
using namespace std;
typedef struct{
	long long f , l; // first , last
} couple;
long long n , dp[101] ;
couple a[101];
int main(){
	long long T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].f >> a[i].l;
			dp[i] = 1;
		}
		for(int i = 1 ; i < n ; i++){
			for(int j = i-1 ; j >= 0 ; j--){
			    if(a[i].f > a[j].l)	{
			    	dp[i] = max(dp[i] , dp[j] + 1);
				}
			}
		}
		cout << *max_element(dp,dp+n) << endl;
	}
}


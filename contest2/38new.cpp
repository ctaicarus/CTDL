#include<bits/stdc++.h>
using namespace std;
int snt[] = {1 , 2 , 3 , 5 , 7 , 11 , 13 , 17 , 23 , 31};
int nghiem[20];
int n , vs;
long long res;
void Try(int k , int t , int n){
	if(t == n){
		long long x = 1;
		for(int i = 1 ; i <= k ; i++)
		    x = x * pow(snt[i] , nghiem[i]);   
		if(x > 0) res = min(res , x);    
	} else {
		for(int i = 1 ; i <= n ; i++){
			if(t * (i+1) <= n){
				nghiem[k] = i;
				t = t * (i+1);
				Try(k+1 , t , n);
				t /= (i+1);
			}
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		vs = 0;
		res = LLONG_MAX;
		Try(1 , 1 , n);
		cout << res << endl;
	}
}


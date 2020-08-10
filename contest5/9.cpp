#include<bits/stdc++.h>
using namespace std;
int n , k;
int res ;
void Try(int z , int sum ){
	if(z == n) {
		if(sum == k){
			res++;
		    return;
		}
		return;
	}
	if(sum > k) return;
	for(int i = 0 ; i <= 9 ; i++)
	   Try(z + 1 , sum + i);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		if(9*n < k) cout << "0" << endl;
		else{
			res = 0;
		    for(int i = 1 ; i <= 9 ; i++){
			    Try(1 , i);
		    }
		    cout << res << endl;
		}	
	}
}


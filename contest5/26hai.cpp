/*
    Note:	XEM PHIM
*/
#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
ll DP[25001];
void Init(){
    int n, C;
	cin>>C>>n;
	int a[101];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	DP[0]=1;
	for (int i=0; i<n; i++){
		for (int j=C; j>=a[i]; j--){
			if (DP[j]==0 && DP[j-a[i]]==1) DP[j]=1;
		}
	}
	for (int i=C; i>=0; i--){
		if (DP[i]){
			cout<<i <<endl;
			return ;
		}
	}
}
void Proc(){}
int main(){
    xxxxx
    int t=1, mul_test = 0		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}
/* ==> Shin <== */

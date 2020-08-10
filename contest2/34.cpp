#include<bits/stdc++.h>
using namespace std;
int a[100] ; // cot
int A[20][20]; // gia tri
int MAX = 0 , s = 0 , n = 8;
bool Ok(int x2 , int y2){
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) ) // cot , va 2 duong cheo co trung nhau hay hong
            return false;
    return true;
}
void init(){
	MAX = 0;
	s = 0;
	for(int i = 1 ; i <= 8 ; i++){
		a[i] = 0;
	}
	for(int i = 1 ; i <= 8 ; i++){
		for(int j = 1 ; j <= 8 ; j++){
			cin >> A[i][j];
		}
	}
}
void Try(int i , int n){
    for(int j = 1 ; j <= n ; j++){
        if(Ok(i,j)){
            a[i] = j;
            s = s + A[i][j];
            if(i == n) MAX = max(MAX , s);
            Try(i+1 , n);
            s = s - A[i][j];
        }
    }
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		Try(1,n);
		cout << MAX << endl;
	}
    
    
}

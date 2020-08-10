#include<bits/stdc++.h>
using namespace std;
typedef struct{
	long long f , l; // first , last
} couple;
long long n ;
couple a[101];
void sapxep(){
	for(int i = 0 ; i < n ; i++){ // sap xep 2 mang theo thoi gian ket thuc tang dan
		for(int j = i + 1 ; j < n ; j++){
			if(a[i].l > a[j].l){
				swap(a[i] , a[j]);
			}
		}
	}
}
int res(){
	int d = 1; // cong viec ket thuc som nhat
	int i = 0; // bat dau tu cong viec ket thuc som nhat
	for(int j = 1 ; j < n ; j++){
		if(a[j].f > a[i].l ){ // thoi gian bat dau > thoi gian ket thuc
			d++;
			i = j;
		}
	}
	return d;
}
int main(){
	long long T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].f >> a[i].l;
		}
        sapxep();
		cout << res() << endl;
	}
}


#include<bits/stdc++.h>
using namespace std;
long long n , a[10001];
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
void display(){
	for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
	cout << endl;
}
void res(){
    int i, j , k = 1;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                haveSwap = true; 
            }
        }
        if(haveSwap == false) break;
        cout << "Buoc " << k << ": " ;
		k++;
		display();
    }
}
int main(){
	int T;
	T = 1;
	while(T--){
	   init();
	   res();
	}
}


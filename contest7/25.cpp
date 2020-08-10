#include<bits/stdc++.h>
using namespace std;
int n , m ;
bool c[10000]; // kiem tra xem nguoi thu i da bi loai chua
void init(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) c[i] = true;
}
void res(){
	int N = n; // so nguoi toi da
	int i = 0 , d = 0; // nguoi thu i , bien dem
	while(n != 1){
		i++;
		if(i > N) i = 1;
		if(c[i]){
			d++;
			if(d == m+1){
				n--;
				c[i] = false;
//				cout << i << " ";
				d = 0;
			}
		}
	}
//	cout << "\nres:";
    for(int i = 1 ; i <= N ; i++){
    	if(c[i]) {
    		cout << i << endl;
    		break;
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}


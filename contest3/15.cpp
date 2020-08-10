#include<bits/stdc++.h>
using namespace std;
int n , s , m;
int res(){
	if(m >= n) return -1;
	if(s < 6){
		int lt = m * s; // luong thuc
		if(lt % n == 0) return lt / n; else return lt / n + 1;
		
	}
	if(s >= 6){ // vi chu naht khong ban
		int lt = m * s; // luong thuc
		int x = lt / n;
		if(lt % n != 0) x = x + 1; // so lan mua
		if(x * n < 7 * m) x++; // thuc an khong du cho nhay chu nhat , phai mua them
		if(x >= 7) return -1 ; else return x;		
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> s >> m;
		cout << res() << endl;
	}
}


#include <bits/stdc++.h>
 
using namespace std;
 
int a[23];
int n, k, sum;
bool ok;
bool Visit[23]; // mang kiem tra xuat hien cua phan tu
 
void back_track( int res = 0, int u = 0) { // res tinh tong , u la phan tu thu u
	if(res == sum) {
		bool flag = true;
		for(int i = 1; i <= n; ++i) { // kiem tra xem co phan tu nao chua xuat hien khong
			if(!Visit[i]) {
				flag = false;
				break;
			}
		}
		if(flag) ok = true; // tat ca phan tu deu xuat hien , va co tong la sum
		else back_track(0, 0);
		return ;
	}
	for(int i = u + 1; i <= n; i++) {
		if(ok) break;
		if(Visit[i] || res + a[i] > sum) continue; // neu res + a[i] > sum thi xet phan tu tiep theo , a[i] da xet thi khong xet nua
		Visit[i] = true;
		back_track( res + a[i], i);
		Visit[i] = false; // a[i] da xet
	}
}
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		sum = 0;
		ok = false;
		for(int i = 1; i <= n; ++i) {
			cin >> a[i];
			 sum += a[i]; 
		}
		if(sum % k != 0) { // khong chia het 
			cout << 0 << '\n';
			continue;
		}
		sum /= k; // chia het
		back_track();
		if(ok) cout << 1;
		else cout << 0;
		cout << '\n';
	}
}

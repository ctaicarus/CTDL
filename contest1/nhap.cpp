#include<bits/stdc++.h>
using namespace std;
int n,k,d;		// sl: so cac kq
int a[11][11],x[11],vs[11];
string kq;
void In(){
	d=0;
	kq="";
	cin>>n>>k;
	for (int i=1;i<=n;i++) 
		for (int j=1;j<=n;j++) cin>>a[i][j];
	for (int i=1;i<=n;i++) vs[i] = 0;	
}
void Solve(){
	int res=0;
	for (int i=1;i<=n;i++)	res += a[i][x[i]];
	if (res == k) {
		d++;
		for (int i=1;i<=n;i++) {
			char c = x[i] + '0';
			kq = kq + c;
		}
		kq = kq + ' ';
	} 
}
void Try(int i){
	for (int j=1;j<=n;j++){
		if (vs[j] == 0){
			x[i]=j;
			vs[j]=1;
			if (i == n) Solve();
			else Try(i+1);
			vs[j]=0;
		}
	}
}
void Result(){
	cout<<d<<'\n';
	for (int i=0;i<kq.size();i++) {
			if(kq[i] != ' ') cout<<kq[i]<<" "; else cout << endl;
	}
}
int main(){
	In();
	Try(1);
	Result();
	return 0;
}
/*
3 10
2 4 3
1 3 6
4 2 4
*/

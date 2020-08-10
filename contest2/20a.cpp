#include<bits/stdc++.h>
using namespace std;
int t,n,a[11],b[100],leng_b;
void Ds1(){
	int i=n,j=1;
	while (i>1){
		for (int j=1;j<=i;j++){
			a[j]=a[j]+a[j+1];
		}
		i--;
		for (int j=1;j<=i;j++) {
			leng_b++;
			b[leng_b]=a[j];
		}
	}
	i=1;
	int k=leng_b;
	while (i<=n){
		cout<<"[";
		for (int j=k-i+1;j<=k;j++) {
			if (j==k) cout<<b[j]<<"] ";
			else cout<<b[j]<<" ";
			leng_b--;
		}
		k=leng_b ;
		i++;
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for (int i=1;i<=n;i++) {
			cin>>a[i];
			b[i]=a[i];
		}
		leng_b=n;
		Ds1();
		cout<<endl;
	}
	return 0;
}

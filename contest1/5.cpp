#include<bits/stdc++.h>

using namespace std;
int n,k,a[100];

void display(){
	for(int i=1;i<=k;i++)
	cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) display();
		else Try(i+1);		
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin>>n>>k;
		for(int i = 0 ; i <= k ; i++) a[i] = i;
	    Try(1);
	    cout << endl;
	}
}


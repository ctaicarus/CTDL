#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while (t--) {
	int n;cin>>n;
	vector <int> a;
	int check[100000]={0};
	for (int i=0;i<n;i++){
		int t;cin>>t;
		check[t]++;
		a.push_back(t);
	}
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++) {
			if (check[a[i]] < check[a[j]]) swap(a[i],a[j]);
			else if (check[a[i]] == check[a[j]] && a[i] > a[j])  swap(a[i],a[j]); 
		}
	for (int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<'\n';	
	}
	return 0;
}

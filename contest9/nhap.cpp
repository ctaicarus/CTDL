#include<bits/stdc++.h>
using namespace std;
int a[51][51];
int main(){
	int n;
	scanf("%d\n",&n);
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++) a[i][j]=0;
	int k=1;
	while (k<=n){
		string s;
		cin.ignore();
		getline(cin,s);
		for (int i=0;i<s.size();i++){
			int d=0;
			while (s[i] != ' ' && s[i] != '\0') {
			 	d = d*10 + s[i]-'0';
			}
			a[i][d]=1;
		}
		k++;
	}
	for (int i=1;i<n;i++) 
		for (int j=i+1;j<=n;j++)
			if (a[i][j]) cout<<i<<" "<<j<<'\n';
	return 0;
}

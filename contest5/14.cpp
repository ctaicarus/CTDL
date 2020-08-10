#include<bits/stdc++.h>  
using namespace std; 
int c[101][101];
int xuly(string str,int n) { 
    memset(c,0,sizeof(c));
	for (int i=1; i<=n; i++) { 
		for (int j=1; j<=n; j++) { 
			//cac ky tu giong nhau nhung khac index(dia chi)
			if (str[i-1] == str[j-1] && i != j) 
				c[i][j] = 1 + c[i-1][j-1];	
			else
				c[i][j] = max(c[i][j-1], c[i-1][j]); 
		} 
	} 
	return c[n][n]; 
} 
int main() { 
	int t; cin>>t;
	while (t--){
        int n; cin>>n;
        string str; cin>>str;
        cout<<xuly(str,n);
        cout<<endl;
	}
	return 0; 
}

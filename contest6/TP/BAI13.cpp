#include <bits/stdc++.h> 
using namespace std; 
void Solution(int a[], int b[], int n, int m) { 
    int res[n+m];
	// noi hai mang voi nhau 
    int i = 0, j = 0, k = 0; 
    while (i < n) { 
        res[k] = a[i]; 
        i += 1; k += 1; 
    } 
    while (j < m) { 
        res[k] = b[j]; 
        j += 1; k += 1; 
    }   
    // Sap xep lai res 
    sort(res, res + n + m); 
    for(int i=0; i<n+m; i++) cout<<res[i]<<" ";
    cout<<endl;
} 
// Test Solution 
int main() { 
    int *a, *b, m, n, T; cin>>T;
    while(T--){
    	cin>>n>>m; a = new int[n]; b = new int[m];
    	for(int i=0; i<n; i++) cin>>a[i];
    	for(int i=0; i<m; i++) cin>>b[i];
    	Solution(a, b, n, m);
	}
} 

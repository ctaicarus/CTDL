// Bai 15: 
#include <bits/stdc++.h> 
using namespace std; 
  
int Solution(int a[], int n, int k) { 
    // sap xep mang 
    sort(a, a + n);  
    int res = 0; //ket qua la 0
    for (int i = 0; i < n; i++) { 
        int j = i+1;  
        while (j < n && a[j] - a[i] < k) { 
            res++; j++; 
        } 
    } 
    return res; 
} 
//test solution  
int main() { 
    int *A, n, T, k; cin>>T;
    while(T--){
    	cin>>n>>k; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	cout<<Solution(A,n,k)<<endl;
    	delete A;
	}    
} 

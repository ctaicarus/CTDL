// Hop hai day sap xep
#include <bits/stdc++.h> 
using namespace std; 
int Solution(int A[], int B[], int m, int n) { 
  	int i = 0, j = 0; 
  	while (i < m && j < n) { 
    	if (A[i] < B[j]) 
       		cout << A[i++] << " ";       
    	else if (B[j] < A[i]) 
       		cout << B[j++] << " ";       
    	else  { 
       		cout << B[j++] << " "; 
       		i++; 
   		} 
  	}   
  	//In phan con lai/
  	while(i < m) 
     	cout << A[i++] << " ";   
  	while(j < n) 
    	cout << B[j++] << " "; 
    cout<<endl;
} 
//Test Solution  
int main() { 
	int *A, *B, n, m, T; cin>>T;
	while(T--){
		cin>>m>>n; A = new int[m]; B = new int[m];
		for(int i=0; i<m; i++) cin>>A[i];
		for(int i=0; i<n; i++) cin>>B[i];
		Solution(A, B, m, n);
		delete A; delete B;
	}
} 

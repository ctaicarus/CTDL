// BAI 1:
#include <bits/stdc++.h> 
using namespace std;   
void Solution(int A[], int n) { 
    //B1: Sap xep 
    sort(A, A+n);   
    //B2: dua ra ket qua
    int i = 0, j = n-1; 
    while (i < j) { 
        cout << A[j--] << " "; 
        cout << A[i++] << " "; 
    }   
    // neu n le ta dua ra so cuoi cung
    if (n % 2 != 0) 
        cout << A[i]; 
    cout<<endl;
}   
// Test solution 
int main() { 
	int n, T, *A;cin>>T;
	while(T--){
		cin>>n;A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		Solution(A, n); delete A;
	}
} 

// BAI 7: tim day con lien tuc sao cho khi sap lai ta duoc day sap xep
#include<bits/stdc++.h> 
using namespace std;   
void Solution(int A[], int n) { 
	int R = 0, L = n-1, i, max, min;    
	//B1: tim chi so R dau tien ben trai de A[] khong duoc sap
	for (R = 0; R < n-1; R++) { 
    	if (A[R] > A[R+1]) 
    		break; 
	} 
	if (R == n-1) { //day con da duoc sap xep    	
		cout<<0<<" "<<0<<endl;
    	return; //ta khong phai lam gi
	}   
	//B2: tim chi so L dau tien ben phai de A[] khong duoc sap
	for(L = n - 1; L > 0; L--) { 
    	if(A[L] < A[L-1]) 
    		break; 
	}   
	// B3: tim max, min trong khoang A[R+1] den A[L]
	//chu y: A[0]..A[R-1] & A[L]..A[n-1] da duoc sap
	max = A[R]; min = A[L]; 
	for(i = R + 1; i <= L; i++) { 
    	if(A[i] > max) 
    		max = A[i]; 
    	if(A[i] < min) 
    		min = A[i]; 
	}   
	//B4: lui R lai vi tri i co A[i] nho hon min {A[R+1], .., A[L]} 
	for( i = 0; i < R; i++) { 
    	if(A[i] > min) {  
    		R = i; 
    		break; 
    	}      
	}    
	//B5: Tien  L den vi tri i co A[i] lon hon max {A[R+1], .., A[L]}
	for( i = n -1; i >= L+1; i--) { 
    	if(A[i] < max) { 
    		L = i; 
    		break; 
    	}  
	}        
	//B6: dua ra ket qua 
	cout << R<<" "<<L<<endl;	
} 
  
int main() { 
	int *A, n, T; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		Solution(A, n); delete A;
	}
} 

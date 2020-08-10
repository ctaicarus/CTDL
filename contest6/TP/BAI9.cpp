// dem tat ca cac cap co hieu bang k
#include<bits/stdc++.h> 
#define MAX 100001
using namespace std; 
  
int Solution1(int A[], int n, int k) { 
    int count = 0;       
    // duyet tung phan tu 
    for (int i = 0; i < n; i++) {        
        // duyet cac cap khac nha 
        for (int j = i+1; j < n; j++) 
            if (A[i] - A[j] == k || A[j] - A[i] == k ) 
                  count++; 
    } 
    return count; 
}   
//Solution 2
int Solution2(int A[], int n, int k) { 
    int count = 0;  // Initialize count       
    bool hashmap[MAX] = {false}; 
    for (int i = 0; i < n; i++) 
        hashmap[A[i]] = true;   
    for (int i = 0; i < n; i++) { 
        int x = A[i]; 
        if (x - k >= 0 && hashmap[x - k]) 
            count++; 
        if (x + k < MAX && hashmap[x + k]) 
            count++; 
        hashmap[x] = false; 
    } 
    return count; 
}
// Test solution 
int main() { 
	int *A, n,k, T; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cin>>k;
		cout<<Solution2(A,n,k)<<endl;
		delete A;
	}
} 

// BAI 3:sap xep theo hieu hai so
#include <bits/stdc++.h> 
using namespace std;  
//10 5 3 9 2: x =7
int x;
int myCompare( int a, int b){
	int s = abs(x-a), t=abs(x-b);
	if(s<t) 
		return 1;	
	else if(s==t && a<b) return 1;
	else return 0;
}
void Result(int A[], int n){
	for(int i=0; i<n; i++) cout<<A[i]<<" ";
	cout<<endl;
}
void Solution(int A[], int n){	
	sort(A, A+n, myCompare);
	Result(A, n);
}
// Test solution 
int main() { 
	int n, T,*A;cin>>T;
	while(T--){
		cin>>n>>x;A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		Solution(A, n); delete A;
	}
}


#include<bits/stdc++.h> 
#define MAX 100001
using namespace std; 
int Hash[MAX];
void Solution1(int *A, int n ){
	int Hash[MAX] = {0};
	for(int i=0; i<n;i++) Hash[A[i]]++;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(Hash[A[i]]<Hash[A[j]]){
				int t = A[i]; A[i]=A[j]; A[j]=t;
			}
			else if(Hash[A[i]]==Hash[A[j]]){
				if(A[i]>A[j]) {
					int t = A[i]; A[i]=A[j]; A[j]=t;
				}
			}
		}
	}	
}
void Result(int *A, int n){
	for(int i=0; i<n; i++) cout<<A[i]<<" ";
	cout<<endl;
}
//Solution 2
int Compare(int a, int b){
	if(Hash[a]>Hash[b]) return 1;
	else if(Hash[a]==Hash[b] && a<b) 
		return 1;
	else return 0;
}
void Init_Hash(int *A, int n){
	for(int i=0; i<MAX; i++) Hash[i]=0;
	for(int i=0; i<n; i++) Hash[A[i]]++;
}
void Solution2(int *A, int n) {
	Init_Hash(A,n);
	sort(A, A+n, Compare);
	Result(A,n);
}
int main(void) {
	int *A, n, T; cin>>T;
	while(T--){
		cin>>n;A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		Solution3(A,n);delete A;
	}
}

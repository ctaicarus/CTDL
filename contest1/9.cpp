#include<iostream>
#include<stdio.h>
 
using namespace std;
 
int main(){
	int T;
	cin >> T;
	while(T--){
		int A[10000] , m , n;
	    cin>>m;
	    A[0]=0;
	    A[1]=1;
	    int p=1;
	    n=2;	
	    for(int i=2;i<=m;i++){
	     	p=p*2;
		    int u=2*n-1;
		    for(int j=n;j<=u;j++) A[j]=A[u-j]+p;
		    n=n*2;
	    }	
     	int b[10000];
	    for(int i=0;i<n;i++){
		   int k=0;
		   int u=A[i];
	       while(u>0)	{
			   b[k++]=u%2;
			   u/=2;			
	   	   }
		   for(int j=k+1;j<=m;j++) cout << "0";
		   while(k>=1) cout << b[--k];
		   cout << " ";
    	}
    	cout << endl;
	}
}
 

 

 

#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
void quickSort(int a[],int first,int last){//thuat toan quickSort 
	int i=first,j=last,mid=(i+j)/2;
	while(i<j){
		while(a[i]<a[mid])// tim vi tri a[i] > a[mid];
		i++;
		while(a[j]>a[mid])//tim vi tri a[j] < a[mid];
 		j--;
		if(i<=j) {// hoan doi a[i] va a[j];
		   swap(a[i],a[j]);
		   i++;// i tang 1
		   j--;// j giam 1
	    }
    }
	    if(i<last) quickSort(a,i,last);
	    if(j>first) quickSort(a,first,j);
   
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		quickSort(a , 0 , n-1);
		for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
	    cout << endl;
	}
}


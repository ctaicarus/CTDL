#include <iostream>
using namespace std;
int a[20],n,k;  

void out(){
	int d=0;
	for(int i=0;i<n;i++)
	if(a[i]==1) d++;
	if(d==k){
		for(int i=0;i<n;i++)
        cout << a[i]<<" ";
        cout << endl;
	}
    
}


void tim(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1) out(); else tim(i+1);
            
    }
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
    	cin >> n >>k;   
        tim(0);
	}
}

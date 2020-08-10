#include<bits/stdc++.h>
using namespace std;
int n , c[101];
unsigned long int catalan(unsigned int n) { 
    if (n <= 1) return 1;  
    unsigned long int res = 0; 
    for (int i=0; i<n; i++) 
        res += catalan(i)*catalan(n-i-1); 
    return res; 
} 
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
	    cout <<	catalan(n) << endl;
	}
}


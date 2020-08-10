#include<iostream> 
using namespace std; 
int n , k;
unsigned long int binomialCoeff(unsigned int n, unsigned int k) { 
    unsigned long long res = 1; 
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1] 
    for (int i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
    return res; 
} 
   
// number in O(n) time 
unsigned long long catalan(unsigned int n) { 
    unsigned long long int c = binomialCoeff(2*n, n);  
    return c/(n+1); 
} 
int main() { 
    int T;
    cin >> T;
    while(T--){
    	cin >> n;
    	cout << catalan(n) << endl;
	}
    return 0; 
} 


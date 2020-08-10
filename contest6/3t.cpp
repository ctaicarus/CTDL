#include <bits/stdc++.h> 
using namespace std; 
pair<int, int> a[1001]; 
int c[1001];
void nhap(int n){
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }       
}
void xuly(int n){
	sort(a, a + n); 
    memset(c,0,sizeof(c));
	int result = 0;  
	for (int i = 0; i < n; i++) { 
		if (c[i] || a[i].second == i) 
			continue; 
		int temp = 0; 
		int j = i; 
		while (!c[j]) { 
			c[j] = 1;  
			j = a[j].second; 
			temp++; 
		} 
		if (temp > 0) { 
			result += (temp - 1); 
		} 
	} 
	cout<<result; 
}
int main() { 
	int t; cin>>t;
	while (t--){
        int n; cin>>n;
        nhap(n);
        xuly(n);
        cout<<endl;
	}
	return 0; 
} 


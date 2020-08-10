#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
int main(){
	int T;
	cin >> T;
	while(T--){
	   cin >> n;
	   for(int i = 0 ; i < n ; i++)
			cin >> a[i];
	    sort(a , a + n);
	    for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
	    cout << endl;
	}
}


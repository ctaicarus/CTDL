#include<bits/stdc++.h>
using namespace std;
int n , a[101];
int f[101];
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		int result = a[1];
		f[1] = a[1];
        for (int i = 2; i <= n; i++) {
            f[i] = a[i];
            for (int j = 1; j < i; j++) 
			    if (a[j] < a[i]) {
                    f[i] = max(f[i], f[j] + a[i]);
                }
            result = max(result, f[i]);
        }
        cout << result << endl;
	}
}


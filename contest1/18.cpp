#include <bits/stdc++.h>
using namespace std;
long long n, s;
long long a[33];
int main() {
    int T;
    cin >> T;
    while(T--){
    	cin >> n >> s;
	    for(int i = 1; i <= n; ++i) cin >> a[i];
	    sort(a + 1, a + n + 1);
	    long long res = 0, cnt = n;
	    while(s && cnt) {
		    long long ans = s / a[cnt];
		    if(ans >= 1) {
		    	res += 1;
		    	s -=  a[cnt];
			}
		    cnt--;
	    }
	    if(s != 0) cout << -1 << endl ; else cout << res << endl;
	}
}

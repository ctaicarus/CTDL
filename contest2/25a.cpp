#include<bits/stdc++.h>
using namespace std;
int a[200];
int n , s;
/*
L[i,t]=1 neu co the tao ra tong t tu i phan tu; 

Ta có the tính L[i,t] theo công thuc: L[i,t]=1 neu L[i-1,t]=1 hoac L[i-1,t-a[i]]=1.
L[t]:=0; L[0]:=1;
for i := 1 to n do
    for t := S downto a[i] do
          if (L[t]=0) and (L[t-a[i]]=1) then L[t]:=1;
*/
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		s = 0;
		for(int i = 1 ; i <= n ; i++) {
			cin >> a[i];
			s = s + a[i];
		}
		if(s % 2 == 1) {
			cout << "NO\n";
		} else {
			int t = s / 2;
			int L[t+1];
			L[t] = 0; L[0] = 1;
            for (int i = 1 ; i <= n ; i++)
            for (int j = t ; j >=a[i] ; j--)
            if (L[j] == 0 && L[j-a[i]] == 1) L[j] = 1;
            if(L[t] == 1) cout <<"YES\n"; else cout <<"NO\n";
		}
		
	 
	}
}


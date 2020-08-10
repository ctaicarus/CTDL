#include<bits/stdc++.h>
using namespace std;
string s;
void init(){
	cin >> s;
}

int res(){
   int m = 0 , d = 0 , ans = 0;
   int n = s.length();
   for(int i = 0 ; i < s.length() ; i++){
   	    if(s[i] == '(') {
   	    	m++;
   	    	if(m > n/2){
   	    	   m--;
			   d++;
			   ans++;	
			}
		}
   	    if(s[i] == ')') {
   	    	d++;
   	    	if(d > m){
   	    		m++;
   	    		if(d > 0) d--;
   	    		ans++;
			}
		}
   }
   return ans;
}
int main(){
	int T;
	scanf("%d\n" , &T );
	while(T--){
		init();
		cout << res() << endl;
	}
}

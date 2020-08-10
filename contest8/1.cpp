#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T--){
	   int n , x;
	   cin >> n;
	   queue<int>s;
	   while(n--){
	   	    cin >> x;
	   	    if(x == 1) cout << s.size() << endl;
	   	    if(x == 2) {
	   	    	if(s.empty()) cout << "YES\n"; else cout << "NO\n";
			}
			if(x == 3){
				int z;
				cin >> z;
				s.push(z);
			}
			if(x == 4){
				if(!s.empty()) s.pop();
			}
			if(x == 5){
				if(!s.empty()) cout << s.front() << endl; else cout << "-1\n";
			}
		    if(x == 6){
		    	if(!s.empty()) cout << s.back() << endl; else cout << "-1\n";
			}
	   }
	}
}


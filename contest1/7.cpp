#include <iostream>
using namespace std;
int n , a[100];
bool tang(){
	for(int i = 1 ; i < n ; i++){
		if(a[i] < a[i+1]) return false;
	}
	return true;
}
void out(){
	if(tang()){
		cout << "(";
	    for(int i = 1 ; i <= n ; i++){
		    if(a[i] != 0 ) cout << a[i] ; 
		    if(i + 1 <= n && a[i+1] != 0) cout << " ";
	    }
	    cout << ") ";
	}
}

bool next(){
	int i = n;
	while(i >= 1 && a[i] <= 1) i--;
	if(i >= 1) {
		a[i]--;
	    a[i+1]++;
	    return true;
	} else return false;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 1 ; i <= n ; i++) a[i] = 0;
		a[1] = n - 1;
		a[2] = 1; 
		cout << "(" << n << ") "; 
		out();
		while(next()){
			out();
		}
		cout << endl;
	}

}

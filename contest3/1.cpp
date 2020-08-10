#include<bits/stdc++.h>
using namespace std;
int money[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n;
int Try(){
	int i = 9;
	int d = 0;
	while(n != 0){
		if(n >= money[i]){
			n = n - money[i];
			d++;
		}
		else i--;
	}
	return d;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		cout << Try() << endl;
	}
}


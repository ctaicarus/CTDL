#include<bits/stdc++.h>
using namespace std;
int n , k , a[1001] , bcd[1001];
bool ok;
void init(){
	ok = false;
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	sort(a+1 , a+1+n);
}
bool check(){
	int sum = 0;
	for(int i = 1 ; i <= n ; i++){
		if(bcd[i] == 1) sum = sum + a[i];
	}
	return (sum == k);
}
void res(){
	priority_queue< int , vector<int> , greater<int> > s;
	for(int i = 1 ; i <= n ; i++){
		if(bcd[i] == 1) s.push(a[i]);
	}
	cout << '[';
	while(s.size() != 1){
		cout << s.top() << " ";
		s.pop();
	}
	cout << s.top();
	s.pop();
	cout << ']';
}

void Try(int i){
	for(int j = 1 ; j >= 0 ; j--){
		bcd[i] = j;
		if(i == n){
			if(check()){
				ok = true;
				res();
			}
		} 	
		else Try(i+1);
	}
}
int main(){
	int T; cin >> T;
	while(T--){
		init();
		Try(1);
		if(!ok) cout << "-1";
		cout << endl;
	}
}

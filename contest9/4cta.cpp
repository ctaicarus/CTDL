#include<bits/stdc++.h>
using namespace std;
int n , a[1001][1001];
void init(){
	scanf("%d\n" , &n);
	string s;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
    for(int i = 1 ; i <= n ; i++){
    	getline(cin , s);
    	int j = 0;
    	while(j < s.length()){
        	int x = 0;
        	while(s[j] != ' ' && j < s.length()){
        		x = x * 10 + s[j] - '0';
        		j++;
			}
			a[i][x] = 1;
		//	a[x][i] = 1;
			j++;
		}
	}
}
void res(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int T;
	T = 1;
	while(T--){
	   init();
	   res();
	   cout << endl;
	}
}


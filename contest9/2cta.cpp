#include<bits/stdc++.h>
using namespace std;
int n  , a[1001][1001];
void init(){
	scanf("%d\n" , &n);
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= n ; i++){
		string s;
		getline(cin , s);
	    int j = 0;
        while(j < s.length()){
        	int x = 0;
        	while(s[j] != ' ' && j < s.length()){
        		x = x * 10 + s[j] - '0';
        		j++;
			}
			a[i][x] = 1 ; a[x][i] = 1;
			j++;
     	}
    }
}
void res(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = i+1 ; j <= n ; j++){
			if(a[i][j] == 1) cout << i << " " << j << endl;
		}
	}
}
int main(){
	int T;
	T = 1;
	while(T--){
	   init();
	   res();
	}
}


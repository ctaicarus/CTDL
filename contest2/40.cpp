#include<bits/stdc++.h>
using namespace std;
int n , a[20][20] , way[20], c[20];
long long MIN = 1000000000000001000ULL;
long long s = 0;
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		c[i] = 0;
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
}

void step(int i){
	if(i > n) MIN = min(MIN , s + a[way[n]][1]);;
	for(int j = 2 ; j <= n ; j++)
	if(c[j] == 0 && s + a[way[i-1]][j] < MIN) {
		way[i] = j;
		s = s + a[way[i-1]][way[i]];
		c[j] = 1;
		step(i+1);
		s = s - a[way[i-1]][way[i]];
		c[j]=0;
	}
}
int main(){
	init();
	way[1] = 1;
	step(2);
	cout << MIN ;
}


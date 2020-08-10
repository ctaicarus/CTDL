#include<bits/stdc++.h>
using namespace std;
string s;
int t , n , k , x , vt; // thuan , nghich , loai bo , do dai xau , vi tri
string result[10001]; // ket qua
void init(){
	t = 0 ; n = 0; vt = 0;
	for(int i = 1 ; i <= 10000 ; i++) result[i] = "";
	x = s .length();
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] == '(') t++;
		if(s[i] == ')') n++;
	}
	k = min(t , n);
}
void Try(int i , string res , int m , int d){ // ki thu thu i , xau ket qua , so ngoac mo , so ngoac dong
    if(i == x ){
     	if( m == d && m == k) {
     		bool check = true; // chua co mat trong result
     		for(int i = 0 ; i <= vt ; i++){
     			if(res == result[i]) {
     				check = false; // co mat
     				break;
				}
			}
     		if(check) {
     			cout << res << " ";
     			vt++;
     			result[vt] = res;
			}
		}
    	return ;
	}
	if(s[i] != ')' && s[i] != '(') Try(i+1 , res + s[i] , m , d);
	if(s[i] == ')' || s[i] == '('){
		for(int j = 1 ; j >= 0  ; j--){
			if(j == 0) Try(i+1 , res , m , d); // khong lay
		    if(j == 1) { // lay
			   if(s[i] == '(') Try(i+1 , res + s[i] , m+1 , d);
			   if(s[i] == ')') {
			   	  if(m > d) Try(i+1 , res + s[i] , m , d+1); // mo ngoac nhieu hon dong ngoac
			   	  if(m <= d) Try(i+1 , res , m , d);
			   }
		    }
	   }
	}
}
int main(){
	int T;
	scanf("%d\n" , &T);
    while(T--){
    	getline(cin , s);
        init();
        Try(0 , "" , 0 , 0);
        cout << endl;
	}
}


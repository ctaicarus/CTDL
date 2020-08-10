#include <iostream>
using namespace std; 
int a[20],n,k; 
int dem = 0;
string res;
bool check(){
	int x = 0 ; // so day lien tiep
	for(int i = 0 ; i <= n - k ; i++){ 
		int d = 0;
		for(int j = i ; j <= i + k -1 ; j++){
			if(a[j] == 0) d++;
		}
		if(d == k) x++;
	}
	if(x == 1) return true; else return false;
}
void out(){
	if(check()){
		for(int i = 0 ; i < n ; i++)
       // if(a[i] == 0) cout << "A" ; else cout << "B";
        if(a[i] == 0) res += 'A' ; else res += 'B';
       // cout << endl; 
        res += ' ';
        dem++;
	}  
}

void tim(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1)  out(); else tim(i+1);
            
    }
}
void display(){
	for(int i = 0 ; i < res.length() ; i++){
		if(res[i] != 32) cout << res[i]; else cout << endl;
	}
}
 
int main(){
    cin >> n >> k;   
    tim(0);
    cout << dem << endl;
    display();
}

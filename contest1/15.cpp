#include<iostream>
#include<iomanip>
using namespace std;
string s;
void sinh( ){
	int i = s.length() - 2; // xuat phat tu vi tri n-1
	while( i > 0 && s[i] >= s[i+1] ) i--; // tìm a[i] dau tien < a[i+1]
	if( i > 0 ){
		int k = s.length() - 1; // xuat phat tu phan tu cuoi
		while( s[i] >= s[k] ) k--; // tim a[k] dau tien thoa man a[k] > a[i]
		swap(s[i] , s[k]); // doi cho a[i] & a[k]
		int r = i + 1, n = s.length() - 1;
		while( r < n ){ // dao vi tri cac phan tu a[i+1] toi a[n]
			swap(s[r] , s[n]);
			r++;
			n--;
		}
	}

}

bool check(){
	for(int i = 0 ; i < s.length() -1 ; i++){
		if(s[i] < s[i+1]) return true;
	} 
	return false;
}

int main(){
	int T , stt;
	cin >> T;
	while(T--){
		cin >> stt;
		cin >> s;
		if(check()) {
			sinh();
			cout << stt << " ";
			cout << s << endl;
		} else {
			cout << stt << " " << "BIGGEST\n";
		}
	}

}





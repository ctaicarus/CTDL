#include<bits/stdc++.h>
using namespace std;
int  n;
void init(){
	cin >> n;
}
long long bcd(int decimalNumber) {
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0) {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
void res(){
	for(int i = 1 ; i <= n ; i++){
		cout << bcd(i) << " ";
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	   cout << endl;
	}
}


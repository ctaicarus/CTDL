#include<bits/stdc++.h>
using namespace std;
long long p = pow(10 , 9) + 7 , n;
float a = 1.0 + sqrt(5); 
float b = 1.0 - sqrt(5);
// return (pow((1.0 + sqrt(5.0)), n) - pow((1.0 - sqrt(5.0)), n)) / (pow(2.0, n) * sqrt(5.0))
long long fibo(long long n){
	return (pow((1.0 + sqrt(5.0)), n) - pow((1.0 - sqrt(5.0)), n)) / (pow(2.0, n) * sqrt(5.0));
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		cout << fibo(n) << endl;
	}
}


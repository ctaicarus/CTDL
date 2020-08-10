#include<bits/stdc++.h>
using namespace std;
unsigned long long temp,res;
int s[] = {1 , 2 , 3 , 5 , 7 , 11 , 13 , 17 , 23 , 31}; // 100 so nguyen to dau tien
int nghiem[100] , n;
void duyet(int k,int t,int n){ // k so nguyen to thu k , t so nghiem , n nghiem
// s[i] là so nguyên to thu i
     if (t == n){
        temp = 1;
        for (int i = 1 ; i < k ; i++){
            temp *= pow(s[i],nghiem[i]-1);
        }
        if (temp > 0) res = min(res,temp);
     }
     else
     {
         for (int i = 2 ; i <= n ; i++)
         if (t*i <= n)
         {
            t *= i;
            nghiem[k]=i;
            if (pow(s[k],i-1)>0) duyet(k+1,t,n);
            t /= i;
         }
     }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	cin >> n;
    	res = 1000000000000001000ULL;
    	duyet(1,1,n);
    	memset(nghiem , 0 , 50);
        cout << res << endl;
	}
}


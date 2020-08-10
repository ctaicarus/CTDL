// Sap xep tham lam xung quanh phan tu giua
#include <bits/stdc++.h> 
using namespace std;   
int n , a[100];
bool Solution() { 
    int b[n]; //tao mang phu B[]      
    copy(a, a + n, b); //copy A vao B      
    sort(b, b + n); //sap xep B  
    for (int i = 0; i < n; i++) {   
        //kiem tra hinh anh phan chieu cua A[] va B[]
        if (!(a[i] == b[i]) && !(a[n - i - 1] == b[i])) 
            return false; 
    }   
    return true; 
}   

int main() { 
	int T;
	cin >> T;
	while (T--){
		cin >> n; 
		for(int i = 0 ; i < n ; i++) cin >>a[i];
		if(Solution()) cout << "Yes\n"; else cout <<"No\n";
	}
}


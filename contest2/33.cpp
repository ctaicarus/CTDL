#include<bits/stdc++.h>
using namespace std;
int a[100];
int d = 0;
bool Ok(int x2,int y2){
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    return true;
}
// a[i] == y2 d�ng de kiem tra xem qu�n hau n�y c� nam c�ng mot cot voi c�c qu�n hau truoc d�.
// abs(i - x2) == abs( a[i] - y2 ) d�ng d? ki?m tra xem qu�n h?u n�y c� n?m tr�n du?ng ch�o c?a c�c qu�n h?u tru?c d� hay kh�ng. C�c b?n c� th? v? h�nh ra v� t? ch?ng minh nh� !
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
        if(Ok(i,j)){
            a[i] = j;
            if(i==n) d++;
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n ;
    cin >> n;
    Try(1,n);
    cout << d;
    return 0;
}

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
// a[i] == y2 dùng de kiem tra xem quân hau này có nam cùng mot cot voi các quân hau truoc dó.
// abs(i - x2) == abs( a[i] - y2 ) dùng d? ki?m tra xem quân h?u này có n?m trên du?ng chéo c?a các quân h?u tru?c dó hay không. Các b?n có th? v? hình ra và t? ch?ng minh nhé !
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

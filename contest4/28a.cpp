#include<bits/stdc++.h> 
using namespace std;
void nhap(int n,int a[]){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void xuly(int n,int a[]){
    sort(a,a+n);
    int mid=n/2+n%2-1;
    int i=n-1;
    int j=mid;
    int d=0;
    while(mid<i && j>=0){
        if(a[i]>=2*a[j]){
            d++;
            j--; i--; 
        } 
        else j--;
    }
    cout<<d+(n-2*d)<<endl;
}
main() { 
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        nhap(n,a);
        xuly(n,a);
    }
}

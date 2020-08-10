/*
    Note:	Chu?i con dài nh?t chia h?t cho K
    TC : O(n)
*/
#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll MIN = - MAX;
const ll mod = 1E9 + 7;
vector<int> A; int n,k;
void Init(){
    cin >> n >> k;
    A.resize(n);
    for(auto &x : A ){  cin >> x; x%=k; }
}
void Proc(){
    unordered_map <int , int> umap;
    int smod_arr[1001]; // luu t?ng t? 0 d?n i mod K;
    int sum = 0, lenMaxx = 0;
    // build m?ng smod
    for(int i=0; i< A.size() ; ++i){
        sum += A[i];
        smod_arr[i] = ((sum % k) + k) % k;  // vì t?ng có th? < 0 nên c?n c?ng thêm k
    }
    //duy?t các ph?n t? c?a smod
    for(int i =0; i< n ; ++i){  
        if(smod_arr[i] == 0)    // n?u chia h?t thì + thêm 1
            lenMaxx = i + 1;
        else if(umap.find(smod_arr[i]) == umap.end()){
            umap[smod_arr[i]] = i;
        }
        else{
            if(lenMaxx < i - umap[smod_arr[i]])
                lenMaxx = i - umap[smod_arr[i]];
        }
    }
    cout << lenMaxx <<endl;
}
int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}
/* ==> Shin <== */

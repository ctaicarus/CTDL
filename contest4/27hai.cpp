#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
vector < ll > v;
vector < ll > pw;
ll n,l,r;
ll power(ll a, ll b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    ll p = power(a, b >> 1);
    if (b & 1) return a * p * p;
    else return p * p;
}
void init(){
    cin >> n >> l >> r;
    v.clear();
    while ?? {
        v.push_back(n);
        n >>= 1;
    }
    int k = v.size() - 1;
    int ans = 0;
    for (ll i = l ; i <= r; i++) {
        if (i & 1) ans++;
        else {
            ll val = i;
            while (val & (val - 1)) {
                int x = upper_bound(pw.begin(), pw.end(), val) - pw.begin() - 1;
                val -= pw[x];
            }
            ans += v[k - (lower_bound(pw.begin(), pw.end(), val) - pw.begin())] & 1;
        }   
    }
    cout << ans << endl;
}
int main(){
    xxxxx
    for (int i = 0 ; i < 50; i++) pw.push_back(power(2, i));
    int t; cin >> t;
    while(t--){
        init();
    }
    return 0;
}
//copy by shincrab

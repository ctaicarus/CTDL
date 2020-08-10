/*
    Note:	
*/
#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
vector<int> ke[1001];
int a[1001][1001],vst[1001], n, m, oke;
bool BFS(int u){
    queue<int> q;
    q.push(u);
    vst[u] = 1;
    while(!q.empty()){
        u = q.front();
        q.pop();
        for(int i=1; i<= n; ++i){
            if(vst[i] == 0 && a[u][i] == 1){
                q.push(i);
                vst[i] =1;
                for(int j=1; j<= n; ++j){
                    if(vst[j] == 0) continue;
                    if(j == u)  continue;
                    if(vst[j] == 1 && a[i][j] == 1) return true;
                }
            }
        }
    }
}
void Init(){
    cin >> n >> m;
    memset(vst,0,sizeof(vst));
    memset(a,0,sizeof(a));
    for(int i=1; i<=m; ++i){
        int tmp1, tmp2;     cin>> tmp1>> tmp2;
        a[tmp1][tmp2] = 1;
        a[tmp2][tmp1] = 1;
    }
}
void Proc(){
    for(int i=1; i<= n; ++i){
        memset(vst,0,sizeof(vst));
        if(BFS(i) == true){
            cout << "YES" << endl;
            return;
        }
    }
    cout <<"NO"<<endl;
    return;
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

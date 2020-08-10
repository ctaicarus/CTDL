#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;
 
using namespace std;
 
vector<string> dict;
int word,m=3,n=3,check;
char a[100][100]; 
bool vst[100][100];
string res;
 
void init(){
    dict.clear();
    res = "";
    check = 0;
    cin >> word >> m >> n;
    for(int i =1 ; i <= word ; ++i){
        string tmp; cin >> tmp;
        dict.push_back(tmp);
    }
    for(int i = 1; i <= m ; ++i)
        for(int j=1; j<= n; ++j){
            cin >> a[i][j];
            vst[i][j] = false;
        }
}
 
bool found(string s){
    for (int i = 0; i < word; i++) 
        if (s.compare(dict[i]) == 0) 
            return true; 
    return false;
}
 
void Try(int row , int col){
    vst[row][col] = true;
    res = res+a[row][col];
 
    if(found(res)) {
         cout <<res <<" ";
         check = 1;
    }
 
    for(int i = row -1 ; i <= row + 1 && i <= m; ++i)
        for(int j = col -1 ; j <= col +1 && j <= n ; ++j)
            if(i >=1 && j >= 1 && !vst[i][j])
                Try(i,j);
 
    res.erase(res.length() - 1); 
    vst[row][col] = false;
}
 
void Solution(){
    res = "";
    for(int i=1; i <= m; ++i)
        for(int j=1; j <= n; ++j)
            Try(i,j);
    if(check == 0)  cout << -1;
}
 
int main(){
    xxx;
    int t ; cin >> t;
    while(t--){
        init();
        Solution();
        cout <<endl;
    }
    return 0;
}

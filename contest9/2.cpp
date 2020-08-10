#include<bits/stdc++.h>
using namespace std;
int nho[1005][1005]={0};
vector<int> adj[1005];
void print_graph(int V){
	for(int i=1;i<=V;i++){
		sort(adj[i].begin(),adj[i].end()); 
		for(int j=0;j<adj[i].size();j++){
			if(nho[i][adj[i][j]]==0){
				cout<<i<<" "<<adj[i][j]<<endl; 
				nho[i][adj[i][j]]=nho[adj[i][j]][i]=1; 
			}
		}
	}
}
main(){
	int V;
	string s;
	cin>>V;
	cin.ignore();
	for(int i=1;i<=V;i++){
		getline(cin,s);
        int j = 0;
        while(j < s.length()){
        	int x = 0;
        	while(s[j] != ' ' && j < s.length()){
        		x = x * 10 + s[j] - '0';
        		j++;
			}
			adj[i].push_back(x);
			j++;
		}
	}
	print_graph(V);	
}

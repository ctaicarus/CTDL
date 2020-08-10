#include <bits/stdc++.h> 
using namespace std;  
int Solution(int A[], int n) { 
    //B1: tao mang cac phan tu va vi tri cac phan tu
	pair<int, int> Pos[n];	
    for (int i = 0; i < n; i++) { 
        Pos[i].first = A[i]; 
        Pos[i].second = i;        
    } 
	//B2: Sap xep mang theo Pos[i].first     
    sort(Pos, Pos + n);  
    bool vis[n] = {false};
    //vector<bool> vis(n, false);//tao vector n phan tu la false
    int Result = 0; //ket qua la 0      
    for (int i = 0; i < n; i++) { //duyet mang da duoc swap
        //neu vis[i]=true hoac Pos[i].second=i
		//Pos[i].second=i: vi tri khong thay doi        
        if (vis[i] || Pos[i].second == i)  
            continue;   
        //tim so node trong cung cong vao ket qua
        int cycle_size = 0; //do dai chu trinh la 0
        int j = i; //j lay tu vi tri i
       // cout<<"Chu trinh:";
        while (!vis[j]){ //lap neu vis[i] =false
            vis[j] = true; //doi vis[i]=true                 
            j = Pos[j].second; //chuyen den node tiep theo
            cycle_size++; //tang do dai cung
        }       		
        if (cycle_size > 0) { //cap nhat do dai cung vao ket qua
            Result += (cycle_size - 1); 
        } 
    }       
    return Result; 
}
//Test Solution
int main(void) {
	int *A, n, T; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cout<<Solution(A,n)<<endl;
	}
}

#include <iostream>
#include <cstring>
#include <iomanip>
#define MAX 1000
using namespace std;
typedef struct Tanxuat{
	char kytu;
	int solan;
};
int Search( Tanxuat X[], int n, char t){
	for(int i=0; i<=n; i++){
		if(X[i].kytu==t)
		    return i;
	}
	return (n+1);
}
int Tach_Kytu(char S[], Tanxuat X[], int n){
	int k=strlen(S); 
	for(int i=0;i<k; i++){
		int p = Search(X,n,S[i]);
		if(p<=n)X[p].solan++;
		else {n=p;
			X[p].kytu = S[i];
			X[p].solan = 1;
		}
	}	
	return n;
}
void Sort(Tanxuat X[], int n){
	Tanxuat t;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<=n; j++){
			if(X[i].solan<X[j].solan){
				t = X[i]; X[i]=X[j]; X[j]=t;
			}
		}
	}
}
void Greedy_Solution(void){
	char S[MAX]; cout<<"Nhap xau S:";cin>>S; //thiet lap S;
	int d; cout<<"Khoang cach d:";cin>>d;//khoang cach d
	int m=-1, n = strlen(S), chuaxet[MAX]; Tanxuat X[255];
	char STR[MAX]; //xau ket qua
	for (int i=0; i<n; i++)//dung de xac dinh vi tri can dat ky tu
		chuaxet[i]=true;
	//Buoc 1: tim so lan xuat hien moi ky tu
	m = Tach_Kytu(S, X, m);
	//Buoc 2: Sap xep giam dan theo so lan xuat hien moi ky tu
	Sort(X, m);
	//Buoc 3: lap
	for(int i=0; i<=m; i++)	{//tham lam tren tap ky tu
		int k = X[i].solan; //lay ky tu xuat hien nhieu nhat
		int t =0; //tim vi tri bat dau dat ky tu
		while (!chuaxet[t]) t++;
		for(int q = 0; q<k; q++){//duyet theo so lan xuat hien
			if((t + q*d)>=n){//neu vuot qua do dai xau
				cout<<"No Solution";
				return; //Khong co giai phap
			}
			STR[t+q*d]=X[i].kytu;
			chuaxet[t+q*d]=false;
		}		
	}
	STR[n]='\0';
	cout<<STR;
}
int main(void){
	Greedy_Solution();
}


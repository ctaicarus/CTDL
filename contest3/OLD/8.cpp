#include<bits/stdc++.h>
using namespace std;
int n;
struct Job { 
   int id;      // Job Id 
   int time;    // thoi gian 
   int money;  // loi nhuan 
};
bool comparison(Job a, Job b) { 
     return (a.money > b.money); 
} 
void Solution(Job a[], int n) { 
    sort(a , a + n, comparison);  //sap xep theo thu tu giam dan cua loi nhuan
//    for(int i = 0 ; i < n ; i++) cout << a[i].id << " " << a[i].time << " " << a[i].money << endl;
    int sum = a[0].money , d = 1 , i = 0; // bat dau tu loi nhuan cao nhat
	for(int j = 1 ; j < n ; j++){
		if(a[j].time > a[i].time){
			sum += a[j].money;
			d++;
			i = j;
		}
	} 
	cout << d << " " << sum << endl;      
} 
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		Job a[n+1];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].id >> a[i].time >> a[i].money;
		}
        Solution(a,n);
	}
}


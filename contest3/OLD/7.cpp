#include<bits/stdc++.h>
using namespace std;
void Solution1(int nr, int dr) {  	
    //Truong hop 1: neu mau so hoac tu so la 0
    if (dr == 0 || nr == 0) 
        return;//khong can giai bai nay   
    //Truong hop 2: neu tu so chia het cho mau so
    if (nr%dr == 0) { 
        cout << nr/dr; //ket qua la mot so nguyen
        return; //khong can giai tiep nua
    } 
    // Truong hop 3: neu tu so lon hon mau so 
    if (nr > dr) { 
        cout << nr/dr << " + ";// dua ra mot so nguyen
		nr = nr%dr;//cong voi phan so (nr%dr)/dr 
    }   
    
    // neu mau so chia het cho tu so
    if (dr%nr == 0) { //vi du 2/4
        cout << "1/" << dr/nr; //ket qua la 1/2
        return; 
    }   
    // neu tu so chia het cho mau so
    if (nr%dr == 0) { 
        cout << nr/dr; //ket qua la mot so nguyen
        return; 
    }   
    // neu tu so lon hon mau so 
    if (nr > dr) { 
        cout << nr/dr << " + ";// lay so mot so nguyen 
        Solution1(nr%dr, dr); //cong voi phan du con lai
        return; 
    }   
    // Truong hop 4: dr>nr va dr%nr khac 0
    while(dr%nr) {
    	int n = dr/nr + 1; //1/n la gia tri tham lam dau tien
    	cout << "1/" << n << " + ";
	    nr = nr*n-dr; 
    	dr = dr*n;    	
	}
	cout << "1/" << dr/nr; //ket qua cuoi cung
 }   

int main(){
	int nr , dr , T; cin>>T;
    while(T--) {
    	cin>>nr>>dr;
    	Solution1(nr,dr); cout<<endl;
	}
}


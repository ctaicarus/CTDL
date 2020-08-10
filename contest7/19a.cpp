#include<bits/stdc++.h>
 
using namespace std;
// I tang
// D giam
void result(string s){
	int n = s.length();
	int Dmin = 0; // gia tri D min sao cho D giam
	int Imax = 0; // gia tri I max sao cho I tang
	int j;
	for(int i = 0 ; i < n ; i++){
		int next = 0;
		switch( s[i] ){
			case 'I':
				j = i + 1;
				while(j < n && s[j] == 'D') { // tim ki tu I 
					next++;
					j++;
				}
				if(i == 0){
					Dmin = next + 2;
					cout << ++Imax;
					cout << Dmin;
					Imax = Dmin;
				}
				else{ 
				    Dmin = Imax + next + 1; 
				    Imax = Dmin; 
				    cout << Imax; 
			    } 
			    for (int k=0; k<next; k++) { 
				    cout << --Imax; 
				    i++;
			    } 
				break;
			case 'D':	
			    if (i == 0) { 
				   j = i+1; 
				   while (s[j] == 'D' && j < n) { // tim ki tu I dau tien gap
					  next++; 
					  j++; 
				  } 
				  Dmin = next + 2; 
				  cout << Dmin << Dmin - 1; 
				  Imax = Dmin - 1; 
			    } 
			    else{ 
				  cout << Imax - 1; 
				  Imax--; 
			    } 
			    break; 
	    }
	} 
	cout << endl; 			
}
 
int main(){
	int T;
	cin>>T;
	while(T--){
		string s;
		cin >> s;
		result(s);
	}
}

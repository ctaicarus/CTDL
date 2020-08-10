#include<bits/stdc++.h>
using namespace std;
int main(){
	int T , n;
	cin >> T;
	string str;
	deque<int>s;
	while(T--){
	   cin >> str;
	   if(str == "PUSHFRONT"){
	   	  cin >> n;
	   	  s.push_front(n);
	   }	
	   if(str == "PRINTFRONT"){
	   	  if(s.empty()) cout << "NONE\n" ; else cout << s.front() << endl;
	   }
	   if(str == "POPFRONT"){
	   	  if(!s.empty()) s.pop_front();
	   }	      
	   if(str == "PUSHBACK"){
	       cin >> n;
		   s.push_back(n); 
	   }
	   if(str == "PRINTBACK"){
	   	  if(s.empty()) cout << "NONE\n" ; else cout << s.back() << endl;
	   }
	   if(str == "POPBACK"){
	   	  if(!s.empty()) s.pop_back();

	   }
	}
}


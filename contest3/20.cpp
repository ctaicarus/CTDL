#include<bits/stdc++.h>
using namespace std;
string s;
int res(){
	vector<int> vs; // vi tri cac ki tu mo ngoac '[';
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] == '[') {
			vs.push_back(i);
		}
	}
	int m = 0; // dem ki tu mo ngoac '[';
	int p = 0;  // dung de theo doi vi tri cua ky tu '[' tiep theo
    int sum = 0; // dung de luu ket qua 
    for(int i = 0 ; i < s.length() ; i++){
    	if(s[i] == '['){
    		++m;
    		++p; // chuyen den ki tu '[' tiep theo
		}
		if(s[i] == ']') --m;
		if(m < 0){ // ']' nhieu hon '['
			sum += vs[p] - i;
			swap(s[i] , s[vs[p]]); // dao vi tri ']' va '[' tiep theo
			++p; // chuyen '[' tiep theo
			m = 1; // 
		}
	}
	return sum;
	
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> s;
		cout << res() << endl;
	}
}


#include<iostream>

using namespace std;
int n, a[100];
int c[100];
void display(){
	for(int i=1;i<=n;i++)
	cout<<a[i];
	cout<<" ";
}
void step(int i){
	if(i>n) display();
	for(int j=1;j<=n;j++)
	if(c[j]==0) {
		c[j]=1;
		a[i]=j;
		step(i+1);
		c[j]=0;
	}
} 

int main(){
	int T;
	cin>>T;
	while(T--){
	  cin>>n;
	  for(int i=1;i<=n;i++) c[i]=0;
	  step(1);
	  cout << endl;
	}

}



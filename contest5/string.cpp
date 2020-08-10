#include<bits/stdc++.h>
using namespace std;
typedef struct{
    char name[20];         
    struct node *next; 
} arr;
arr *Node;
int n;
int main(){
   scanf("%d",&n);
   Node = new *arr[n];
   for(int i = 0 ; i < n ; i++) scanf("%s",&Node[i].name);
   if(Node.empty()) cout <<"empty"; else cout <<"not empty";
}

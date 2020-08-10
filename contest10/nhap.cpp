#include<stdio.h>
#include<conio.h>
void nhap(int &n)
{ 
	scanf("%d",&n);
}
void in(int a[10][10],int &n)
{
     for(int i=0;i<n;i++)
     {
	    for(int j=0;j<n;j++)
        printf("%4d",a[i][j]);
        printf("\n");
     } 
}
void xoayoc(int n)
{
     int a[10][10],i,d=1,b=0;
     while(b<=n/2)
     {
        for(i=b;i<n-b;i++) a[b][i]=d++;
           for(i=b+1;i<n-b;i++) a[i][n-b-1]=d++;
              for(i=n-b-2;i>=b;i--) a[n-b-1][i]=d++;
                 for(i=n-b-2;i>b;i--) a[i][b]=d++;
                     b++;
     }
     printf("Ma tran xoay oc la:\n");in(a,n);
}
main()
{ 
    int n;
    nhap(n);
    xoayoc(n);
    getch(); 
}

/*
CAO TU ANH
B18DCCN006
N28
02
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char name[100];
	char address[100];
}Person;


int main()
{
Person person[100];

FILE * in;
in=fopen("giaodich.txt","a+");

int choice,i=1;
// write in file
while(1)
{
printf("name and address :");
gets(person[i].name);
gets(person[i].address);fprintf(in,"%s\t%s\n",person[i].name, person[i].address);
printf("continue? press 1....exit? press 0\n");
scanf("%d",&choice);
if(choice==0) break; else i++;	
}
printf(".....................\n");
fclose(in);
}






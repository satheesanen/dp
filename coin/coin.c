#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fid;

void main(){
int data;
int cnt;
char name[100];
float price;
fid = freopen("input.txt","r",stdin);
cnt=0;
while(1){
	scanf("%d",&data);
	scanf("%s",name);
	scanf("%f",&price);
	printf("Data=%d\n",data);
	printf("Name=%s\n",name);
	printf("price=%f\n",price);
	cnt++;
	if(cnt > 3)
	break;
	}

}

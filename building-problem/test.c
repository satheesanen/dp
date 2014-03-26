#include <stdio.h>
#include <stdlib.h>
FILE *f_in, f_out

main(){
int num_problem;
int num_floors;
int size;
f_in = freopen("input.txt","r",stdin);
scanf("%d",&num_problem);
do{
scanf("%d",&num_floors);
	do{
		scanf("%d",&size);
		if(size < 0){
			size = abs(size);
			
		}	
		num_floors--;
	}while(num_floors > 0);
num_problem--;
}while(num_problem > 0);
scanf

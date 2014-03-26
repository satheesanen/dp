#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fid;
main(){
int num_print,num_copy,case_num,max;
fid = freopen("in.txt","r",stdin);
case_num = 0;
while(1){
	case_num++;
	scanf("%d",&num_print);
	if(num_print < 0)
		break;
	num_copy=0;
	max=1;
	while(1){
		if(num_print <= max)
		{
			printf("Case %d:%d\n",case_num,num_copy);
			break;
		}
		max *= 2;
                num_copy++;

	}
}
}

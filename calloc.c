#include<stdio.h>
#include<stdlib.h>
int main(){
	int num, sum = 0;
	int *pt;
	pt =NULL;
	int i;
	printf("allocat int \n ");
	scanf("%d",&num);
	pt=(int*)calloc(num,sizeof(int));
	if(pt==0){
		printf("Error");
		exit(1);
	}
	printf("Enter value \n");
	for(i = 0; i<num; i++){
		scanf("%d",pt+i);
		sum+=*(pt+i);
	}
	printf("Sum Of entered value : \t %d",sum);
	free(pt);
	
	
}

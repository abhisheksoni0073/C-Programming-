#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,num1, sum = 0;
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
		scanf("%d",pt+1);
		sum+=*(pt+1);
	}
	printf("Reallocat size of int \n");
	scanf("%d",&num1);
	pt =realloc(pt,num1*sizeof(int));
	
	printf("Enter value \n");
	for(i = 0; i<num1; i++){
		scanf("%d",pt+1);
		sum+=*(pt+1);
	}

	printf("Sum Of entered value : \t %d",sum);
	free(pt);
	return 0;
	
}

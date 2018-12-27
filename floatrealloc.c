#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,num1; float sum = 0;
	float *pt;
	pt =NULL;
	int i;
	printf("allocat int \n ");
	scanf("%d",&num);
	pt=(float*)calloc(num,sizeof(float));
	if(pt==0){
		printf("Error");
		exit(1);
	}
	printf("Enter value \n");
	for(i = 0; i<num; i++){
		scanf("%f",pt+1);
		sum+=*(pt+1);
	}
	printf("Reallocat size of int \n");
	scanf("%d",&num1);
	pt =realloc(pt,num1*sizeof(float));
	
	printf("Enter value \n");
	for(i = 0; i<num1; i++){
		scanf("%f",pt+1);
		sum+=*(pt+1);
	}

	printf("Sum Of entered value : \t %f",sum);
	free(pt);
	return 0;
	
}

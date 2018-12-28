#include<stdio.h>
#include<stdlib.h>
int main(){
	int num, num1;
	float *pt;
	int i;
	printf("allocat int \n ");
	scanf("%d",&num);
	pt=(float*)malloc(num*sizeof(float));
	printf("Enter value \n");
	for(i = 0; i<num; i++){
		scanf("%f",pt+i);
	}
	printf("Realloc memory \n");
	scanf("%d",&num1);
	pt =realloc(pt,num1*sizeof(float));
	
	printf("Enter value \n");
	for(i = 0; i<num1; i++){
		scanf("%f",pt+i);
	}
	printf("Entered Value \n");
	for(i =0; i<num1; i++){
	printf("location %d :   %f \t \n",i,*(pt+i));
	}
	free(pt);	
}


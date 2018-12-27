#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	float *pt;
	pt =NULL;
	int i;
	printf("allocat int \n ");
	scanf("%d",&num);
	pt=(float*)malloc(num*sizeof(float));
	if(pt==0){
		printf("Error");
		exit(1);
	}
	printf("Enter value \n");
	for(i = 0; i<num; i++){
		scanf("%f",pt+1);
	}
	printf("Entered Value \n");
	for(i =0; i<num; i++){
		printf("%f \t",*(pt+1));
	}
	
	free(pt);
	return 0;
	
}

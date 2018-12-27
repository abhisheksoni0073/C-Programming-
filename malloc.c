#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	int *pt;
	pt =NULL;
	int i;
	printf("allocat int \n ");
	scanf("%d",&num);
	pt=(int*)malloc(num*sizeof(int));
	if(pt==0){
		printf("Error");
		exit(1);
	}
	printf("Enter value \n");
	for(i = 0; i<num; i++){
		scanf("%d",pt+1);
	}
	printf("Entered Value \n");
	for(i =0; i<num; i++){
		printf("%d \t",*(pt+1));
	}
	printf("Total size of int : \t %d",sizeof(num));
	free(pt);
	return 0;
	
}

#include<stdio.h>
int main(){
	FILE *pt;
	pt = fopen("file.txt","aw+");
	fprintf(pt,"I am abhishek soni");
	fclose(pt);
	
	
}

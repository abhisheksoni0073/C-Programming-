#include<stdio.h>
int main(){
	FILE *pt;
	pt = fopen("file1.txt","aw+");
	fputs("I am abhishek soni",pt);
	fclose(pt);
	
	
}

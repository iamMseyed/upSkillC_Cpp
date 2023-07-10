//null pointers 
#include<stdio.h>

int main(){
	int a = 10;
	int *p = NULL; //not lowercase, remember!
	int *pt = NULL;
	printf("Value of p: %p",p);	 //null hold zero value in c
	printf("\nValue of pt: %p",pt);
	printf("\nAddress of p: %p",&p);
	printf("\nAddress of pt: %p",&pt);
}
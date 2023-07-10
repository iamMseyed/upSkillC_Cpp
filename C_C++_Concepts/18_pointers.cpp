#include<stdio.h>

int main(){
	int a = 10;
	int *p = &a;
	
	printf("Value of a: %d",a); //contains value
	printf("\nAddres of a: %p",&a); //go to a's address via & and print via %p
	printf("\nValue of p: %p",p); //p contains addresss and to print address we use %p.
	 //We didn't use &p because p itself contains address and &p will contain addrss of this p (pointer varaible) itself
	printf("\nAddress of p: %p",&p); //get address of p and print it. 
	 //Remember p!=&p. but both contains address
	
	if(a==*p)
		printf("\n -- Via conditon: a==*p -- \np is a pointer and  contains address of a");
	if(&a == p)
		printf("\n -- Via conditon: &a==p -- \np is a pointer and  contains address of a");
	return 0;
}
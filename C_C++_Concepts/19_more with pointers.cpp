//more with pointers
#include<stdio.h>

int main(){
	int a = 10;
	int *p = &a;
	int sum;
	
	sum = *p +10; 
	/*p = value(which is actually address of a), * denotes go to that address and fetch 
	value of it (derefrencing) which will get value of a itself */
	 
	printf("Value of a: %d",a); 
	printf("\nValue of p: %p",p);
	
	printf("\nAddress of a: %p",&a);
	printf("\nAddress of p: %p",&p);
	
	printf("\nSum is: %d",sum);
	printf("\nSum is stored at this address :%p",&sum);
	
	*p = *p+10; 
	/* p stores addres of a, *p is value of a = 10, +10 =20. This is assigned to p, 
	which contains address of a, and to value via *. So, internally we are changing value of a. 
	*/
	
	printf("\n\n ---After changes---");
	printf("\nValue of a: %d",a); 
	
	*p = a+10;
	/* a = 20 (changed previously), +10 =30. This is assigned to p, which contains address of a, and to value via *.
	So, internally we are changing value of a. 
	*/
	
	printf("\n\n ---Again, after changes---");
	printf("\nValue of a: %d",a); 
	
}
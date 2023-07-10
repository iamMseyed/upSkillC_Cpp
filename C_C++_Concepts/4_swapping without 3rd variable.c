#include<stdio.h>
#include<conio.h>

int main(){
	int a,b;
	printf("Enter ist variable: ",a);
	scanf("%d",&a);
	printf("Enter 2nd variable: ",b);
	scanf("%d",&b);
	
	printf("Before swapping, values are %d and %d", a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping, values are %d and %d",a,b);
	
	return 0;
}
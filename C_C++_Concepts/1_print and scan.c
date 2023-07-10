#include<stdio.h>
#include<conio.h>

int a=100; //global variable
void add(void);

int main(){
	printf("Enter value for global variable a:");
	scanf("%d",&a);
	add();
}

void add(void){
	int a = 200;
	printf("\nvalue of local variable is %d",a); //if local and global variable is same, this will print local variable.
	{
		extern int a;
		printf("\nvalue of global variable is %d via block",a); //if local and global variable is same, this will print local variable.
	}
	/*
	int b; //local variable
	printf("Enter value for local variable:"+b);
	scanf("%d",&b);
	printf("Addition of local and global variable: %d",(a+b));
	*/
}
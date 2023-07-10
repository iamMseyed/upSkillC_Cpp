#include<stdio.h>
#include<conio.h>

main(){
	printf("Enter any character to find its ascii value:");
	char ch;
	scanf("%c",&ch);
	int chValue = ch;
	if( (chValue>=65 && chValue <=90) || (chValue>=97 && chValue <=122))
		printf("ASCII value of %c is %d",ch,ch);
	else{
		printf("Out of bounds: %d",ch);
		printf("\nPlease enter charcter value only!");
	}
	
}

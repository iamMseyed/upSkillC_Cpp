#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int size;
	printf("Enter length of array: ");
	scanf("%d",&size);
	
	char string[size];	
	printf("Enter any string of length %d: ",size);
	scanf("%s",string);
	
	int i,j;
	for(i=0;i<strlen(string);i++){
		for(j=0;j<=i;j++){
			printf("%c",string[j]); //individual elements one after one
//			printf("%c",string[i]); //same elements one after one
		}
		printf("\n");
	}
}
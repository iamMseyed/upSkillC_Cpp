#include<stdio.h>
#include<conio.h>
int main(){
	int n,d;
	float res;
	printf("Enter numerator:");
	scanf("%d",&n);
	printf("Enter denomerator:");
	scanf("%d",&d);
	if(d!=0){ 
		res =n/d;
		printf("Result without explicit typecasting is: %f",res); 
		res =(float)n/d;  //if not typecasted, result will be in float but just 0 after point
		printf("\nResult with explicit typecasting is: %f",res); 
	}
	else
		printf("Can't divide by zero");
	return 0;
}
//enum datatype

#include<conio.h>
#include<stdio.h>

int main(){ //return type of main in c is int implicitly
/*
	typedef int num;
	num a = 12;
	printf("Value of typedef int is %d",a);
	return 0;  //main always returns 0 implicitly if program runs fine, else returns any error value of int type
*/

	enum DaysOfWeek { MON=1, TUE, WED, THRS, FRI, SAT, SUN}; //by default is 0. as mon is initilized to 1, further will increment by 1
	
		int n;
		printf("Enter number ranging from 1-7. Any day of a week:");
		scanf("%d",&n);
		enum DaysOfWeek day;
	
		day = n;
		if(day == 6 || day == 7) // if(day == SAT || day == SUN)
			printf("It is weekend!");
		else
			printf("Back to work!");
		getch();
	return 0;
}
	

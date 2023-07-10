#include<stdio.h>
#include<conio.h>

struct student {
	int rollno;
	char name[10];
}; //defined structure

int main(){
	struct student stu[5]; //array of structure

	printf("Enter details of 5 students:\n");

	for(int i = 0; i<5;i++){
		printf("\nEnter roll no. of student-%d: ",i+1);		
		scanf("%d",&stu[i].rollno);
		
		printf("Enter name of student-%d: ",i+1);		
		scanf("%s",&stu[i].name); //using %s, just string upto space
	}
	
	printf("====Student details are====");
	for(int i = 0; i<5;i++){
		printf("\nRoll no. of %s: %d ",stu[i].name,stu[i].rollno);						
	}
	
}
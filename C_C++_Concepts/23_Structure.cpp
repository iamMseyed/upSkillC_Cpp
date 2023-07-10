#include<stdio.h>
#include<conio.h>

// static structure
/*
struct student{
	int rollno;
	char name[10];
} stu = {14, "Seyed"};

int main(){
	printf("Student roll no. is: %d",stu.rollno);
	printf("\nStudent name is: %s",stu.name);
}

*/

//dynamic structure
struct student{
	int rollno;
	char name[10];
};

int main(){
	struct student st; //creating variable of student structure st
	int rollno; char tmp, name[20];
	
	printf("Enter student roll no.: ");
	scanf("%d",&st.rollno);
	printf("\nStudent roll no. is: %d",st.rollno);
	
	
	printf("\nEnter student name: ");
	scanf("%c",&tmp); //buffer value as we are taking string value after int
//	scanf("%[^\n]",&st.name); //this will take string only upto space occured, not after that
	fgets(st.name, 10,stdin) ; 
	printf("\nStudent name. is: %s",st.name);
	
	
		
	
	
	
	
	
	
}
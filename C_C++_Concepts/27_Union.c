#include<stdio.h>
#include<conio.h>

union Student {
	int rollno;
	char name[10];
};
int main(){
	union Student st;
	printf("Enter student rollno.: ");
	scanf("%d",&st.rollno);
	
	printf("Enter student name: ");
	scanf("%s",st.name);
	
	printf("=== Student details are ====");
	printf("\n%s's rollno. is %d",st.name,st.rollno); 
	/*the problem here will be that the last element will be printed but we get garbage value of rollno.
	The reason is that the union takes memory of highest element, say we have int and char array, int is
	of 2 bytes (lets suppose current compiler is assigning 2 bytes to int variable) and for char array
	we have 10 bytes. As char's size is high, thus this much of memory will be taken by union. Now when
	we take int value, it will be stored in this memory location, but when we take name, it will override
	the int value. So, when we output the result, name will be as it is, but we will get garbage value of 
	int. 
	*/
}
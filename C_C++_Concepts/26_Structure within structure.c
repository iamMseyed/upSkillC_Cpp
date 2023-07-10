#include<stdio.h>
#include<conio.h>

struct student{
	int rollno;
	struct library{
		char bookname[10];
		int price;
	}lb; //inner structure variable, needed to acces the inner structure inside main()
};

int main(){
	struct student st;
	printf("Enter student rollno.: ");
	scanf("%d",&st.rollno);
	
	printf("Enter book name: ");
	scanf("%s",st.lb.bookname); //bookname is array, so no need to use '&'. Used %s, thus will take only values till space
	
	printf("Ener book price: ");
	scanf("%d",&st.lb.price); 
	
	printf("===Student details are===");
	printf("\nStudent with %d rollno. has taken %s book worth %d",st.rollno, st.lb.bookname, st.lb.price);
	
	
	
	
}
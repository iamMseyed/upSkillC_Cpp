#include<stdio.h>
#include<conio.h>

struct student {
	int id;
	char name[20];
	int marks[5];
};

int main(){
	
	struct student stuVar;
	printf("Enter student id: ");
	scanf("%d",&stuVar.id);
	
	printf("Enter student name: ");
	char temp;
	scanf("%c",&temp);
	fgets(stuVar.name, 20,stdin);
	
	printf("===Enter subject marks===\n");
	for(int i = 0; i<5;i++){
		printf("Enter sub %d marks: ",i+1);
		scanf("%d",&stuVar.marks[i]);
	}
	
	printf("-----Student details are-----");
	
	printf("\nId :%d",stuVar.id);
	
	printf("\nName: %s\t",stuVar.name);
	
	printf("\n==Marks==");
	for(int i = 0; i<5;i++){
		printf("\nSub %d marks: %d ",i+1,stuVar.marks[i]);
	}

}
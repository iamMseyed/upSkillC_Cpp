//practice pointers 
#include<stdio.h>

int main(){
	
	/*Q1
		int a = 10;
		printf("%d",a); 
		printf("\n%d", *(&a)); //&a-> address of a , * value at that address which is value of a itself
	*/

	/*Q2
		int a = 10;
		int *p = &a;
		*p = *p+1; //*p is a itself, a+1 and store this to a itself
		printf("\n %d", a ); //11
		printf("\n %d",*p);  //*p is a itself, value is 11
	*/
	

	/*Q3
		int a = 10;
		int *p = &a;
		printf("\n %p",p); //get value of p, but p is pointer so %p will print value of p, which is address
		a++; //increment value of a;
		printf("\n %p",p); 
		//as p is pointing to a, in previous line of code value of a is incremented, but p stores address of that
		//value, so p won't be affected and value will be same as was before.
	*/
	
	/*Q4
		int a = 10;
		int *p = &a; //
		int *ptr = p; 
		//ptr is new address variable and is storing value of p, which actually is the address as p
		//itself is pointer. Now * will print the value at the address, which links to a itself, thus it
		//will store value of a itself
		printf("%u", *ptr);  //%u is unsigned int, will print value of a
	*/
	
	/*Q5
		int a = 100;
	 	int *p = &a; //p is an address variable and stores address of a
		*p = *p + a++;
//		 printf("%d",*p + a++);
		//this line of code). Saved to *p  which points to address of a, thus a = 200 now
		printf("\n %d",a ); //here value is 201 (200 by *p and post increment = 1, thus 201)
		printf("\n %d",(*p+1) ); // 201+1 = 202
	*/	
}
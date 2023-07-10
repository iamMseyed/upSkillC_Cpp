#include<iostream>
using namespace std;

void disp(){ //either create function or just create function defintion before creating main(), so main should be aware of the function
	cout<<"\n\tHello from disp.";
}

int sum(int x, int y){ //call by values
	return x+y;
}

void sumA(int *p, int *q){ //call by address
	int mul = (*p) * (*q);
	cout <<"\nMultiplication of numbers is: " <<mul;
}

void swap(int *p, int *q){  //call by address
	*p = (*p) + (*q);  
	*q = (*p) - (*q); 
	*p = (*p) - (*q);
}

void swapRef(int &p, int &q){
	int *a= &p;
	int *b = &q;
	*a= *a+*b;
	*b= *a-*b;
	*a= *a-*b;
}
int main(){
	
	cout<<"Via disp function:";
	disp();
	int a,b;
	cout <<"\nEnter value for a: ";
	cin >> a;
	cout <<"Enter value for b: ";
	cin >> b;
	
	cout <<"\nValues are :" <<a <<" and " <<b;
	
	int &ref = a; //called reference variable, here we are not assigning value of a to ref but rather we are holding address of a in ref;
	cout<<"Reference variable of a is "<<ref; //ref hold the reference of a
	
	/*
	cout<<"REF of ref: " <<&ref; //same ref if int &ref = a; and not int ref = a;
	cout <<"REF of a: " <<&a; //same ref if int &ref = a; and not int ref = a;
	*/
	
	int sumN= sum(a,b);  //call by value
	cout <<"\nSummation of numbers via call by value: " <<sumN;
	
	sumA(&a,&b);  //call by address
	
	cout<<"\nBefore swapping values are: "<<a << "\t"<<b;
	swap(&a,&b); //call by address
	cout <<"\nAfter swapping values are (call by address): "<<a << "\t"<<b;
	
	swapRef(a,b);
	cout<<"\nAgain after swapping values are (call by reference)"<<a <<"\t" <<b;
	
	
	return 0;
}
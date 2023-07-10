#include<iostream>

using namespace std;

int callByValue(int x){
	return (x+5);
}

int callByAddress(int *x){ 
	*x=*x+3;
	return *x;
}


int main(){
	
	int a;
	cout<<"Enter first number: ";
	cin >>a;
	
	cout <<"Added some value to x via call by value is: "<< callByValue(a);
	cout<<"\nValue of a after: "<<a;
	
	cout <<"\nAdded some value at the memory address via call by address is: "<< callByAddress(&a);
	cout<<"\nValue of a after: "<<a;
	
}

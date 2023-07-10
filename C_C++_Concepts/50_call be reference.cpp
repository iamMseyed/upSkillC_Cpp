//call be reference
#include<iostream>

using namespace std;

void callByRef(int &p){
	p = 10;
	 /*we have passed a to this function and is caught by reference variable that is p. Now we have changed value
	  of p to 10 and this will change the original value too as this is a reference varaible.
	 */
	
}
int main(){
	
	int a;
	cout<<"Enter value for a: "	;
	cin>>a;
	
	callByRef(a);
	cout<<"Value of a after calling callBeRef(): "<<a;
}


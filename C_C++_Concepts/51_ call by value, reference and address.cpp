#include<iostream>

using namespace std;

void swapCallByVal(int a, int b); //simple arguments
void swapCallByAddress(int *a, int *b); //where there is a concept of address, we are going to store that variabl in a spl type of varaible called pointer
void swapCallByRef(int &p, int &q); //though is address type but is referenced variable

int main(){
	
	int a,b;
	cout<<"Enter value for a: & b: ";
	cin >>a >>b;
	
	cout<<"Value before swapping via call by value, a: "<<a<<", b: "<<b;
	swapCallByVal(a,b);
	cout<<"\nValue after swapping via call by value, a: "<<a<<", b: "<<b;
		
	cout<<"\nValue before swapping via call by address, a: "<<a<<", b: "<<b;
	swapCallByAddress(&a, &b);
	cout<<"\nValue after swapping via call by address, a: "<<a<<", b: "<<b;
	
//	cout<<"\nAddress of a and b: " << &a <<" and " << &b;

	cout<<"\nValue before swapping via call by reference, a: "<<a<<", b: "<<b;
	swapCallByRef(a,b);
	cout<<"\nValue after swapping via call by reference, a: "<<a<<", b: "<<b;
	
	
}

void swapCallByVal(int p, int q){
	p = p+q;
	q = p-q;
	p = p+q;	
}

void swapCallByAddress(int *m, int *n){
	*m = *m + *n;
	*n = *m - *n;
	*m = *m - *n;
}

void swapCallByRef(int &m, int &n){
	cout<<"\n Address of m: and n:  "<<&m <<" and " <<&n;
	m=m+n; 
	/*here m and n is reference variable not pointer or normal variable. Reference variable is kinda alias of the variable and any changes 
	made to it will be reflected in original variable. Kinda pointer type but is not.
	*/
	n=m-n;
	m=m-n;
	//we didn't return any thing!
}



#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(int x){
			a = x;
			cout<<"\nA class constructor initilized!";
		}
		void displayA(){
			cout<<"\nValue of A from class A via C class constructor call is: "<<a;
		}
};

class B{
	int b;
	public:
		B(int y){
			b=y;
			cout<<"\nB class constructor intilized!";
		}	
		void displayB(){
			cout<<"\nValue of B from class B via C class constructor call is : "<<b;
		}
};

class C: public A, public B{  //inheritance concept (multiple)
//this header should be remembered, helps in calling other class constructor, here class A is first, so, this constructor will be called first
	int c;
	public:
		C(int x, int y, int z): B(y),A(x){ //passing A class's constructor value of x, and B class's constructor value of y. 
			c = z;
			cout<<"\nC class constructor intilized!";
		}
		void displayC(){
			cout<<"\nValue of C via C class constructor call is: "<<c;
		}
};


int main(){
	int a,b,c;
	cout<<"Enter value for a, b, and c: ";
	cin>>a>>b>>c;
	
	C objC(a,b,c);
	
	objC.displayA();
	objC.displayB();
	objC.displayC();
	
}

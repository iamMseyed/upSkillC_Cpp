#include<iostream>
using namespace std;

class Base{
	int a;
	public:
		Base(int x){
			a = x;
			cout<<"\nBase class constructor initilized!";
		}
		void dispBase(){
			cout<<"\nValue of a is: "<<a;
		}
};

class Derived: public Base{
	int b;
	public:
		Derived(int x, int y): Base(x), b(y){ //initilizing both Base class variable and its own private varaible
			cout<<"\nDerived class constructor initilized!";
		}
		void dispDer(){
			cout<<"\nValue ofderived b is: "<<b;
		}
};

int main()
{
	Derived obj(10,20);
	obj.dispBase();
	obj.dispDer();
	
}

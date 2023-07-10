/*
	a class with atleast one pure virtual function is called abstract class. Virtual function is a function with no body.
	Both virtual function and pure virtual function falls in base class. Also those classes which inherit abstract class
	without actually creating defintion of pure virtual function, are still considered abstract class. Remember we can't
	create object of abstract class but we can create pointer or reference out of it. 
*/
#include<iostream>
using namespace std;

class base{
	protected:
		int a;
	public:
		void setA(int x){
			a=x;
		}
		virtual void show()=0; //pure virtual function
};

class derived:public base{
	int b;
	public:
		void setB(int y){
			b = y;
		}
		void show(){
			cout<<"\nValue of a and b is: "<<a <<" and "<<b;
		}
};

int main(){
	//in case of virtual and ure virtual functions, we create pointer to a class
	base *ptrB;
	derived objD;
//	derived *ptrD;
	ptrB= &objD;
	int a,b;
	cout<<"Enter value for a and b:\n";
	cin>>a>>b;
	
	ptrB->setA(a);
	static_cast<derived*>(ptrB)->setB(b); //we are sure about the cast, that is why we used static_cast
	//or ( (derived*)ptrB )->setB(b);
//	dynamic_cast<derived*>(ptrB)->setB(b); //if not sure, say dynamic casting, then we go with this.
	ptrB->show();
	return 0;
}


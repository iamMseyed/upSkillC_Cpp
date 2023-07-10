//used to acheive runtime polymorphism
#include<iostream>
using namespace std;

class base{
	public:
		void msg(){
			cout<<"\nIn base class msg()";
		}
		void virtual show(){
			cout<<"\nIn base class show()";
		}
};

class derived:public base{
	public:
		void msg(){
			cout<<"\nIn derived class msg()";
		}
		void show(){
			cout<<"\nIn derived class show()";
		}
};

int main(){
	base *bPtr;
	base bObj;
	bPtr=&bObj; //base ptr to base class
	bPtr->msg();
	bPtr->show();
	
	derived dObj;
	bPtr=&dObj; //base pointer to derived class
	/*
	  base pointer to derived class will have the option to call only methods which are same in both the class's and will call its
	  own method unless base class's function is virtual
	*/
	bPtr->msg();  //here this will call msg() of base class
	bPtr->show();  //but here it will call show() of derived class as in base class show() is declared virtual
	
	
}

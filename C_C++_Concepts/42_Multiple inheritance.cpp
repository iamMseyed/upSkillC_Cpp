#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
		void setA(int x){
			a = x;
//			cout<<"Val A: "<<a;
		}
};

class B{
	protected:
		int b;
	public:
		void setB(int y){
			b = y;
//			cout<<"Val B: "<<b;
		}
};

class C : public A, public B{ //multiple inheritance
	int c;
	public:
		void add();
		void display();
};

void C::add(){
	c = a+b;
}

void C::display(){
	cout<<"\nValue of a is: "<<a;
	cout<<"\nValue of b is: "<<b;
	cout<<"\nAddition of a and b is: "<<c;
	
}

int main(){
	
	C obj;
	int x,y;
	cout<<"Enter value for x: ";
	cin>>x;
	cout<<"Enter value of y: ";
	cin>>y;
	
	obj.setA(x);
	obj.setB(y);
	obj.add();
	obj.display();
	
}

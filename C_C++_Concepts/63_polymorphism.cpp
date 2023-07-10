//function with same name but with different implementation. Based upon the object we choose which funtion to implement
//runtime polymorphism is also called: dynamic binding or late binding
#include<iostream>
using namespace std;

class Parent{
	public:
		virtual void show()=0;
};
class Mehra:public Parent{
	int b;
	public:
		Mehra(int x){
			b =x;
		}
		void show(){
			cout<<"\nValue in mehra class is: "<<b;
		}
};

class Rohit:public Parent{
	int c;
		public:
		Rohit(int x){
			c =x;
		}
		void show(){
			cout<<"\nValue in rohit class is: "<<c;
		}
};

int main(){
	int a, b;
	cout<<"Enter value for a and b:\n";
	cin>>a>>b;
	
	Mehra objM(a);
	Rohit objR(b);
	
//	Parent *ptrP;
//	ptrP = &objM;
//	ptrP->show();
//	
//	ptrP = &objR;
//	ptrP->show();

	    //OR
	    
	Parent *ptrP[2];
	ptrP[0] = &objM;
	ptrP[1] = &objR;
	ptrP[0]->show();
	ptrP[1]->show();   	
}

#include<iostream> 
using namespace std;

class A{
	protected:
		int a;
	public:
		void setA(int x){
			a=x;
		}	
};

class B:public A{
	protected:
		int b;
	
	public:
		void setB(int y){
			b=y;
		}	
		void display(){
			cout<<"\nValue of a via class B: " <<a;
			cout<<"\nValue of b via class B: "<<b;
		}
};

class C: public A{
	protected:
		int c;
	public:
		void setC(int z){
			c=z;
		}
		void display(){
			cout<<"\nValue of a via class C: " <<a;
			cout<<"\nValue of c via class C: "<<c;
		}
};

int main(){
	B objB;
	C objC;
	
	int a, b, c;
	
	cout<<"Enter value for a, b, and c: ";
	cin>>a >> b>>c;
	
	objB.setA(a);
	objB.setB(b);
	
	objC.setA(a);
	objC.setC(c);
	
	objB.display();
	objC.display();
	
	
}

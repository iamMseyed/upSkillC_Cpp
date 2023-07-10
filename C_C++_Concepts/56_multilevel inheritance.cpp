#include<iostream>

using namespace std;

class base1{
	protected:
		int a;
	public:
		void setA(int x){
			a = x;
		}
		void getA(){
			cout<<"\nValue of base1's variable is: "<<a;
		}
};

class derived1: public base1{
	protected:
		int b;
	public:
		void setB(int x){
			b = x;
		}
		void getB(){
			cout<<"\nValue of derived1's variable is: "<<b;
		}
};

class derived2: public derived1{
	int c;
	public:
		void setC(int x){
			c = x;
		}
		void getC(){
			cout<<"\nValue of derived2's variable is: "<<c;
		}
};


int main(){
	derived2 obj;
	
	int a,b,c;
	cout<<"Enter value for a, b and c:\n";
	cin>>a>>b>>c;
	
	obj.setA(a);
	obj.setB(b);
	obj.setC(c);
	
	obj.getA();
	obj.getB();
	obj.getC();
	
	
}

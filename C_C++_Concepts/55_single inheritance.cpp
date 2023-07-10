//single inheritance

#include<iostream>
using namespace std;

class base{
	protected:
		int a,b;
	public:
		void setA_B(int x, int y){
			a=x;
			b=y;
		}
		void getA_B(){
			cout<<"Value of a via base class is: "<<a;
			cout<<"Value of b via base class is: "<<b;
		}
};

class derived: private base{ 
	int x, y;
	public:
		void setA_B(int a, int b){
			x=a;
			y=b;
		}
		void getA_B(){
			cout<<"\nValue-1 via derived class is: "<<x;
			cout<<"\nValue-2 via derived class is: "<<y;
		}
		
};

int main(){
	derived obD;		
	int a,b;
	cout<<"Enter value for a and b \n";
	cin>>a>>b;
	
	obD.setA_B(a,b); //same name, which function will be called base or derived??
	obD.getA_B();	
}	



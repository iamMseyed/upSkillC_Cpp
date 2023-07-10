#include<iostream>
using namespace std;

class stc{
	int a;
	static int b; //declare
	public:
		void setA(int x){
			a=x;
			cout<<"\nNumber is: "<<a;
			b++;
		}
		
		void display(){
			cout<<"\nValue of static variable count: "<<b;
		}
};
int stc::b;  //essential to define static data member, as this is not related to any object. So, any changes made to it will be visible to other objects 
// or int stc::b=anyValue; //if not initilized, value=0
int main(){
	
	stc obj, obj1, obj2;	
	int a, b;
	
	obj.display();
	obj1.display();
	obj2.display();

	cout<<"\nEnter value of a: ";
	cin>>a;
	obj.setA(a);
	obj.display();
	
	cout<<"\nEnter value of a: ";
	cin>>a;
	obj1.setA(a);
	obj1.display();
	
	cout<<"\nEnter value of a: ";
	cin>>a;
	
	obj2.setA(a);
	obj2.display();
	

	return 0;
}

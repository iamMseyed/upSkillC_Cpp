//used to declare and initilize new object via already created object
/*the main difference between copy constructor and assignment operator is that while assigning any constructor, 
we already should have the objcect declared and intilized. but in case of copy constructor, we copy the constructor at the time of declaration 
*/
#include<iostream>

using namespace std;

class created{
	int a;
	int b;
	public:
		created(int, int); //constructor don't have a return type
		created (const created &copy); //copy constructor via reference varaible. //constructor don't have a return type
		void display();
		
};

created::created(int x, int y){ //constructor don't have a return type
	a = x;
	b = y;	
}

created::created(const created &copy){ //constructor don't have a return type
	a = copy.a;
	b = copy.b;
}


void created::display(){
	cout<<"\nValue of a: "<<a;
	cout<<"\nValue of b: "<<b;
}
int main(){
		
	created obj1(10, 12);
	obj1.display();
	//ist object created
	
	created obj2(obj1);
	//another object created by copying the object details
	obj2.display();
	
	created obj3 = obj2; //declared and initilized thus is a copy constructor
	obj3.display();
	
}

/*
	Friend function name should be same and placed in every class where we need to get 
	rules: 
	1: friend function is not the member function of any class though they are used inside class thus we don't need any object to access it.
	2: As they are not the member function of any class, they don't need scope resolution to access (::), outside of class
	3: As we need them to access the members of a class, we usually pass objects as argument to it. 
*/
#include<iostream>
using namespace std;

class one; //class one declaration. Forward declaration
class two{ //class two definition
	int a;
	friend void add(one,two); 
	/*
	This is in private scope, still won't effect a bit. //To pass class one, we need to be declared before.
	REMEMBER: this is not a member function, if we need to access the members of a particular class, we go with a friend function
	*/
	
	public:
		void setData(int);
};

class one{
	int b;
	friend void add(one,two);
	public:
		void setData(int);
};

void one::setData(int x){
	b = x;
}

void two::setData(int y){
	a = y;
}
void add(one ob1, two ob2){ //no need to use scope resolution as is a friend function
	cout<<"Value of class-1's a: "<<ob1.b;
	cout<<"\nValue of class-2's b: "<<ob2.a;
	cout<<"\nSummation of these class variables is: "<<ob1.b+ob2.a;
}

int main(){
	int a,b;
	one ob1;
	two ob2;
	
	cout<<"Enter any decimal value: ";
	cin>>a;
	
	cout<<"Enter another decimal value: ";
	cin>>b;
	
	ob1.setData(a);
	ob2.setData(b);
	add(ob1, ob2);//no need to call via object as is a friend function. This is the beauty of a friend function
}

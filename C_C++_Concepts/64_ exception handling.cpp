#include<iostream>
using namespace std;

int main(){
	float a, b,c;
	cout<<"Enter value for a and b: \n";
	cin>>a>>b;
	c=a/b;
	try{
		if(b!=0)
			cout<<a<<"/"<<b<<" is "<<c;
		else
			throw(b);	
	}
	catch(float i){
		cout<<"Can't divide by zero!";
	}
}

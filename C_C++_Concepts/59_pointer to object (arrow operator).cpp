#include<iostream>
using namespace std;

class student{
	int rollno;
	public:
		void setR(int x);
		void getR();
};
	void student::setR(int x){
		rollno = x;
	}
	void student::getR(){
		cout<<"Roll no. is: "<<rollno;
	}
	
int main(){
	student ob;
	student *obp;
	obp = &ob; //pointer to object, now we can access via arrow operator else it would crash the program if we try to access via arrow operator
	int a;
	cout<<"Enter student roll no.: ";
	cin>>a;
	
	obp->setR(a);
	//or
	(*obp).getR();
}

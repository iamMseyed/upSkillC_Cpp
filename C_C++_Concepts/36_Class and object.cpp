#include<iostream>
using namespace std;
class student{
	private: //by default
		string name; //data member
		int marks[5]; //data member
		string sub[5]= {"Arabic","Urdu","Maths","Science","English"};
	public:
		void getData(); //member function
		void putData(); //member function
};

void student::putData(){
	cout<<"Enter student name: ";
	getline(cin,name);
	for(int i = 0; i<5;i++){
		cout<<sub[i]<<" marks: ";
		cin>>marks[i];
		cin.ignore(); //to clear any input buffer. was getting odd subjects only like input buffer was taking even values as null
	}
}

void student::getData(){
	int sum=0;
	cout<<"\n==== Student details =====";
	cout<<"\nStudent name is :"<<name;
	for(int i=0;i<5;i++){
		cout<<"\n"<<sub[i]<<" marks is: " <<marks[i];
		sum+=marks[i];
	}
	cout <<"\nTotal marks: " <<sum;
}

int main(){
	student ob; //simple way to create object just normal variable
	ob.putData();
	ob.getData();
}
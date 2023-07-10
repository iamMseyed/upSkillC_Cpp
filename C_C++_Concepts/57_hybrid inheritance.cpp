#include<iostream>

using namespace std;

class student{
		int rollno;
		string name;
		
	public:
		void setRN(int z);
		void getRN();
		void setName(string na);
		void getName();
				
};

	void student::setRN(int z){
				rollno = z;
			}
	void student::getRN(){
				cout<<"\nStudent roll no. is: "<<rollno;
			}
	void student::setName(string na){
				name = na;
			}
	void student::getName(){
				cout<<"\nStudent name is: "<<name;
			}	
		
class test : public student{ //single inheritance 
	protected:
		float m1,m2,m3,m4,m5,sum;
	public:
		void setMarks(float a1, float a2, float a3, float a4, float a5);
		void getTotalMarks();
};

	void test::setMarks(float a1, float a2, float a3, float a4, float a5){
				m1= a1;
				m2= a2;
				m3= a3;
				m4= a4;
				m5= a5;	
	}
	void test:: getTotalMarks(){
				sum = m1+m2+m3+m4+m5;
				cout<<"\nStudent scored marks: "<<sum;
	}
			
class sports{
	protected:
		char sportsGrade;
	public:
		void setGrade(char g);
		void getGrade();
};
	void sports:: setGrade(char g){
			sportsGrade = g;
	}
		
	void sports:: getGrade(){
			cout<<"\nStudent scored grade in sports: "<<sportsGrade;
	}
	
class result : public test, public sports { //multiple inheritance
	public:
		getDetails(){
			this->getName(); //or getName(); where this-> is called automatically
			this->getRN();
			this->getTotalMarks();
			this->getGrade();	
		}
};

int main(){
	int rollno;
	string name;
	float m1,m2,m3,m4,m5;
	char g;	
	
	cout<<"Enter student name, rollno, marks 1, 2,3,4,5 subjects and grade seprated by enter:\n";
	cin>>name>>rollno>>m1>>m2>>m3>>m4>>m5>>g;
	
	result obj;
	obj.setName(name);
	obj.setRN(rollno);
	obj.setMarks(m1,m2,m3,m4,m5);
	obj.setGrade(g);
	obj.getDetails();
		
	return 0;
}

#include<iostream>
using namespace std;

class time{
	int h, m;
	public:
		void setTime(int, int);
		void getTime();
		void sum(time, time); //class name as object when we need to use object	
};

void time::setTime(int x, int y){
	h = x;
	m = y;
}

void time::getTime(){
	cout <<"\nHours: "<<h;
	cout<<" and Minutes: "<<m;
}

void time::sum(time t1, time t2){
	m= t1.m+t2.m; //get the minutes
	h=m/60; //here we need to get hours if min>60. So, if minutes are divided by 60 then the sum will be stored in hour.
	m=m%60; //here this will generate the remainder. Once the minutes >60 those will be converted to hours, but those which aren't divided by 60 will be summed up to minutes
	h=h+ t1.h+ t2.h; //here we don't need to change hours into days, hours will be calculated as is. 
}

int main(){
	time ob,ob1,ob2;
	int h1,m1, h2,m2;
	cout<<"Enter hours in decimal value for object-1: ";
	cin>>h1;
	cout<<"Enter minutes in decimal value for object-1: ";
	cin>>m1;
	
	cout<<"Enter hours in decimal value for object-2: ";
	cin>>h2;
	cout<<"Enter minutes in decimal value for object-2: ";
	cin>>m2;
	
	ob.setTime(h1,m1);	
	ob1.setTime(h2,m2);
	
	ob2.sum(ob,ob1);
	
	ob.getTime();
	ob1.getTime();
	ob2.getTime();
}

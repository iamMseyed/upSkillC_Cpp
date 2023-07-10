#include<iostream>
using namespace std;

class A{
	int a;
	public:
		void printA(){
			int a=20;
			cout<<"value of a A-Class :"<<a;
		}
};

class B: virtual public A{
	int b;
	public:
		void printB(){
			int b=20;
			cout<<"value of b B-Class :"<<b;
		}
};

class C:virtual  public A{
	int c;
	public:
		void printC(){
			int c=20;
			cout<<"value of c C-Class :"<<c;
		}
};

class D:public B,public C{ //hierarchal inheritance 
	int d;
	public:
		void printD(){
			int d=20;
			cout<<"value of d D -Class :"<<d;
		}
};

int main(){
	D obj;
	obj.printA(); //if virtual not set, will generate ambigious error
}

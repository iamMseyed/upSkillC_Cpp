//used for run time mememory allocation -> Dynamic memory allocation
#include<iostream>
using namespace std;

int main(){
	int size, total;
	cout<<"Enter total subject:";
	cin>>size;
	
	int *p = new int[size]; //new creates dynamic memory allocation and returns address, thus storing in pointer type variable p.
	
	cout<<"====Enter subject marks====\n";
	for(int i = 0;i<size;i++){
		cout<<"Subject-"<<i+1<<" marks: ";
		cin>>p[i];
		total+=p[i];
	}
	
	cout<<"===== Subject marks====";
	for(int i = 0;i<size;i++){
		cout<<"\nSubject-"<<i+1<<" marks:"<<p[i]; //in case of pointer with array, we use either p[i] without * before to derefrence as arrays will do it for us
		//cout<<"\nSubject-"<<i+1<<" marks:"<<*(p+i); //either this, we havn't used [ ] in here just incremented pointer 
	}
	cout<<"\nTotal marks scored: "<<total;
	cout<<"\nvalue of p at 0: "<<p[0];
	delete[] p; //for deletion of dynamically created array type
//	delete p; //for deletion of single element, 
	cout<<"\nvalue of p at 1: "<<p[0]; //possible garbage value
}

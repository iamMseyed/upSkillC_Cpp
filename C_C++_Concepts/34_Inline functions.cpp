//to reduce function calling time, mostly prefered while function code is less.
/*Remember inline code should be less, and it depends upon compiler whether it will inline the function or make it 
simple function. So, code less lines inside.
*/
#include<iostream>
using namespace std;

inline int max(int x, int y){
	return (x>y)?x:y;
}

int main(){
	int n1,n2,n3;
	cout <<"Enter a ist number: ";
	cin>>n1;
	
	cout <<"Enter a 2nd number: ";
	cin>>n2;
	
	cout<<"Maximum of 1st and 2nd number is: "<<max(n1,n2);		
}

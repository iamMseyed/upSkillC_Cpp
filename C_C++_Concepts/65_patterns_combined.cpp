#include<iostream>
using namespace std;

int main(){
	
	int i,j;
	
/*
	*
	**
	***
	****
	*****
*/
	cout<<"===Traingle increasing right===\n";
	for (i=0;i<5;i++){
		for(j=0;j<=i;j++)
			cout<<"*"<<" ";
		cout<<"\n";
	}
	
/*
	*****
	****
	***
	**
	*
*/
	cout<<"\n===Traingle decreasing right===\n";
	for (i=5;i>=0;i--){
		for(j=0;j<i;j++)
			cout<<"*"<<" ";
		cout<<"\n";
	}
	

	cout<<"\n===Traingle Increasing number right===\n";
	for (i=1;i<6;i++){
		for(j=1;j<=i;j++)
			cout<<j<<" ";
		cout<<"\n";
	}
	
	cout<<"\n===Traingle Increasing number right===\n";
	for (i=1;i<6;i++){
		for(j=1;j<=i;j++)
			cout<<i<<" ";
		cout<<"\n";
	}
	
	cout<<"\n===Traingle Increasing number ===\n";
	int n= 0;
	for (i=1;i<6;i++){
		for(j=1;j<=i;j++){
			n++;
			cout<<n<<" ";	
		}
		cout<<"\n";
	}
	
	cout<<"\n===Diamond pattern ===\n";
	

    cout << "Enter the number of rows (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Diamon pattern requir odd value only, making the number nearst odd: "<<++n <<"\n";
    }

    int midRow = (n + 1) / 2;

    for (int i = 1; i <= midRow; i++) {
        for (int j = 1; j <= midRow - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = midRow - 1; i >= 1; i--) {
        for (int j = 1; j <= midRow - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout <<endl;
    }

	return 0;	
}


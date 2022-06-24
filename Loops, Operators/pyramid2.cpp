#include<iostream>
#include <iomanip>
using namespace std;

int main(){

	int num;

	cout<<setw(40)<<"__ DISPLAY THE SET OF PRIME NUMBERS __\n"<<endl;
	
	cout<<"This program prints all the prime numbers from a given range"<<endl;
	cout<<"Enter the end value of the range: ";
	cin>>num;
	
	cout<<"\nAll the prime numbers between 1 and "<<num<<" are as follows : \n"<<endl;
	
	for (int i=2; i<=num;i++){
	
		int flag=0;
		
		for (int k=2; k<i; k++){
						if (i%k==0)  	 flag=1; }
				
		if (flag==0){
				cout<<setw(5)<<i<<endl;	   	   	   
		}
	}



	cout<<endl;
	cout<<endl;	   	   	   
	cout<<setw(40)<<"__ FULL HALF PYRAMID __\n"<<endl;
	
	int max=20;
	for (int i=0; i<5; i++){
			
			cout<<setw(max);
			
			for (int k=1;k<=i+1;k++)			//left side stars
					cout<<" * ";	
			for (int j=1; j<=i; j++)			//right side stars
						cout<<" * " ;
			cout<<endl;
			max=max-3;
			}

/*
	cout<<setw(40)<<"__ INVERTED HALF PYRAMID __\n"<<endl;
	
	for (int i=5; i>=0; i--) {
			for (int j=0; j<=i;j++){
			cout<<" * " ;
			}
	cout<<endl;
	}

	cout<<setw(40)<<"__ INVERTED HALF PYRAMID USING NUMBERS __\n"<<endl;
	
	for (int i=5; i>=0; i--) {
			for (int j=1; j<=i;j++){
			cout<<j<<" " ;
			}
			
	cout<<endl;
	}
*/
	return 0;
}


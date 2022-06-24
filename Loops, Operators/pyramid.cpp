#include<iostream>
#include <iomanip>
using namespace std;

int main(){

	cout<<setw(40)<<"__ PYRAMID USING for LOOPS __\n"<<endl;
	for (int i =0; i<=5; i++) {
			for (int j=1; j<=i;j++){
			cout<<" * " ;
			}
	cout<<endl;
	}
	cout<<endl;
	
	cout<<setw(50)<<"__ PYRAMID OF ALPHABETS USING LOOPS __\n"<<endl;
	char ch='A';
	for (int i =0; i<=5; i++) {
			for (int j=0; j<=i;j++){
			cout<<ch<<" ";
			}
	ch++;
	cout<<endl;
	}
	

	cout<<endl;
	cout<<setw(50)<<"__ PYRAMID OF NUMBER USING LOOPS __\n"<<endl;
	for (int i =0; i<=5; i++) {
			for (int j=1; j<=i;j++){
			cout<<j<<" ";
			}
	cout<<endl;
	}
	
	cout<<endl;
	cout<<setw(50)<<"__ DYNAMIC PYRAMID OF NUMBER USING LOOPS __\n"<<endl;
	int j=1;
	int i;
	int max=10;
	for (i =1; i<=5; i++) {
	
			
		//	  for (int k1=1; k1<=max;k1++)   //spacing
		//	  	  cout<<" ";
			cout<<setw(max);
			for (int k=i; k<=j;k++)			//prints numbers
				cout<<k;
				
			for (int u=j-1; u>=i; u--)   	
				cout<<u;
			
	cout<<endl;
	j=j+2;
	max=max-1;
	}

	cout<<endl;
	cout<<setw(50)<<"__ PYRAMID of * USING LOOPS __\n"<<endl;
	
	int row;
	cout<<"Enter the number of rows you want : ";
	cin>>row;

	for (int i =0; i<=row; i++) {
			for (int j=1; j<=i;j++){
			cout<<" * ";
			}
	cout<<endl;
	}



	return 0;
}


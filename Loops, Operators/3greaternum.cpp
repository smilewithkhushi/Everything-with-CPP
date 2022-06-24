/* Max of 2, 3 and n numbers
display only odd numbers from list
display only even numbers from list
sum of even numbers
sum of odd numbers
average of numbers
display prime numbers from n numbers
calculate % and give grades accordingly */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	cout<<setw(40)<<"\n __* DISPLAY THE PRIME NUMBERS: C++ PROGRAM *__"<<endl;
	
	int i,n,x,max;
	cout<<"\nHow many numbers you want to enter? ";
	cin>>n;
	cout<<endl;
	i=1;
	while (i<=n){
		cout<<"Enter the number : ";
		cin>>x;
		
		int k=2;
		int flag=0;
		while(k<x){
 			if (x%k==0) flag=1;
			k++;
		}
		if (flag!=1) cout<<"\t-> Prime number entered: "<<x<<endl;
		else cout<<endl;
		i++;
	}
	
	
	return 0;
}
/*

//greatest number out of n numbers

	cout<<setw(40)<<"\n __* FINDING THE GREATEST NUMBER: C++ PROGRAM *__"<<endl;
	
	float x;
	int i,n,max;
	cout<<"\nHow many numbers you want to enter? ";
	cin>>n;
	cout<<endl;
	i=1;
	max=-1;
	while (i<=n){
		cout<<"Enter the number : ";
		cin>>x;
		if (x>max) max=x;
		i++;
	}
	cout<<"\n\tMaxiumum of "<<n<<" numbers is "<<max<<endl;
	return 0;

//DISPLAYS THE ODD NUMBER ENTERED BY USER
	cout<<setw(60)<< "\n__* DISPLAY THE SUM OF ALL THE ODD & EVEN NUMBERS ENTERED BY USER: C++ PROGRAM*__"<<endl;
	
	int i,n,x, sumOdd, sumEven;
	sumOdd=sumEven=0;
	
	cout<<"\nHow many numbers you want to enter? ";
	cin>>n;
	cout<<endl;
	
	i=1;
	while (i<=n){
		cout<<"\nEnter the number : ";
		cin>>x;

	if (x%2!=0){
	 cout<<"\t-> Odd number entered: "<<x<<endl;
	 sumOdd=sumOdd+x;
	 } else{
	 cout<<"\t-> Even number entered: "<<x<<endl;
	 sumEven=sumEven+x;
	 }	  
	i++;
}
	cout<<"\n# SUM OF ODD NUMBERS IS "<<sumOdd<<endl;
	cout<<"# SUM OF EVEN NUMBERS IS "<<sumEven<<endl;
	


//DISPLAYS THE ODD NUMBER ENTERD BY USER
cout<<setw(50)<< "__* DISPLAY THE ODD NUMBERS ENTERED BY USER: C++ PROGRAM*__"<<endl;
	
	int i,n,x,max1;
	cout<<"\nHow many numbers you want to enter? ";
	cin>>n;
	cout<<endl;
	i=1;
	max1=-1;
	while (i<=n){
		cout<<"\nEnter the number : ";
		cin>>x;

	if (x%2!=0) cout<<"\t ->Odd number is "<<x<<endl;
	i++;
}
//DISPLAYS ONLY EVEN NUMBERS ENTERED BY USER

	cout<<setw(50)<< "__* DISPLAY THE EVEN NUMBERS ENTERED BY USER: C++ PROGRAM*__"<<endl;
	
	int i,n,x,max1;
	cout<<"\nHow many numbers you want to enter? ";
	cin>>n;
	cout<<endl;
	i=1;
	max1=-1;
	while (i<=n){
		cout<<"\nEnter the number : ";
		cin>>x;

	if (x%2==0) cout<<"\t -> Even number is "<<x<<endl;
	i++;
}
	return 0;
}




//The program takes numbers as input and only displays hte even numbers

		cout<<setw(50)<< "__*COMPARISION OF NUMBERS PROGRAM*__"<<endl;

	char ch='p';

	while (ch=='p'){
		int a,b,c;
		cout<<"Enter the value of three numbers: ";
		cin>>a>>b>>c;
		cout<<endl;
		cout<<setw(25)<<"Maximum of three numbers is ";

		if (a>b){
			if (a>c) cout<<a;
		else cout <<c;
		}
		else{
			if (b>c) cout<< b;
			else  cout<<c;
		
}
	cout<<"\n"<<endl<<"PROGRAM ENDS HERE"<<endl;
	
}	 


*/



/*
//The program shows the average of input numbers
	int i,nums,x,sum,avg;
	cout<<"How many numbers you want to enter? ";
	cin>>nums;
	cout<<endl;
	i=1;
	sum=0;
	while (i<=nums){
		cout<<"Enter the number : ";
		cin>>x;
		
		sum+=x;
	i++;
}
	avg=sum/nums;
	cout<<"The sum of given numbers is "<<sum<<endl;
	cout<<"The average of given numbers is "<<avg<<endl;
*/


#include<iostream>
#include <iomanip>
using namespace std;

void pyramid1(){
    cout<<endl;
    for (int i =0; i<=5; i++) {
			for (int j=1; j<=i;j++){
			cout<<" * " ;
			}
	cout<<endl;
	}
    return;}

void pyramid2(){
    for (int i=5; i>=0; i--) {
			for (int j=0; j<=i;j++){
			cout<<" * " ;
			}	
	cout<<endl;	}
    return ;
}

void pyramid3(){
    cout<<endl;
    char ch='A';
	for (int i =0; i<=5; i++) {
			for (int j=0; j<=i;j++){
			cout<<ch<<" "; }
	ch++;
	cout<<endl;
	}
    return;
}
void pyramid4(){
    for (int i =0; i<=5; i++) {
			for (int j=1; j<=i;j++){
			cout<<j<<" ";
			}
	cout<<endl;
	}
	return;
}
void pyramid5(){
   	for (int i=5; i>=0; i--) {
		for (int j=1; j<=i;j++){
		cout<<j<<" "; }
	cout<<endl;
    }
    return;
}
void pyramid6(){
    int j=1;
	int i;
	int max=10;
	for (i =1; i<=5; i++) {
			cout<<setw(max);
			for (int k=i; k<=j;k++)			
				cout<<k;
			
			for (int u=j-1; u>=i; u--)   	
				cout<<u;
	
			cout<<endl;
			j=j+2;
			max=max-1;
			}
 	return;
}

int main(){

    cout<<setw(40)<<" * DISPLAY VARIOUS PATTERNS * "<<endl;
    cout<<endl;

    cout<<"=============================="<<endl;
    cout<<"\tPRESS : "<<endl;
    cout<<"1 for Ascending Pyramid of *"<<endl;  
    cout<<"2 for Descending Pyramid of *"<<endl;
    cout<<"3 for Ascending Pyramid of Alphabets"<<endl;
    cout<<"4 for Ascending Pyramid of Numbers"<<endl;
    cout<<"5 for Descending Pyramid of Numbers"<<endl;
    cout<<"6 for Dynamic Full Pyramid"<<endl;
    cout<<"=============================="<<endl;
    cout<<endl;
    
    int choice;
    char run='y';
    while (run=='y'){
        
    cout<<"Enter your choice here: ";
    cin>>choice;
    
    switch (choice){
        case 1 : pyramid1();
                break;
        case 2 : pyramid2();
                break;  
        case 3 : pyramid3();
                break;
        case 4 : pyramid4();
                break;
        case 5 : pyramid5();
                break;  
        case 6 : pyramid6();
                break;
        default : cout<<"Invalid Choice. Try again!"<<endl;
    }
    cout<<endl<<"Do you want to continue?? (y/n) ";
    cin>>run;
    cout<<endl;
    }

    cout<<endl<<" * PROGRAM ENDS HERE * "<<endl;
    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    cout<<setw(100)<<"__THIS PROGRAM CHECKS IF THE NUMBER IS PRIME OR COMPOSITE__"<<endl;

    cout<<endl;
	
	int k=0;

for (k=0;k<5;k++){
    int num;
    int flag=0;

    cout<<"Enter the number : ";
    cin>>num;
	int i=2;
	while(i<num){
    	if (num%i==0){
        	flag=1;        
    	}
		i++;
	}

	if (flag==1)
   		cout<<num<<" is composite number (non prime) "<<endl<<"\n ------------*********------------\n"<<endl;
		
	else
		cout<<"The Number is Prime"<<endl<<"\n------------*********------------\n"<<endl;
		
}
	return 0;
}


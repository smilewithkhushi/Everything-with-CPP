#include<iostream>
#include<iomanip>
using namespace std;

void primeTest(int num){
    int k=2;
	int flag=0;
	while(k<num){
 		if (num%k==0) flag=1;
		k++;
	}
	if (flag!=1) cout<<"\t->"<<num<<" is the Prime Number"<<endl<<endl;
	else cout<<"\t->"<<num<<" is a Composite Number."<<endl<<endl;
    return ;
}

int main(){
	cout<<setw(45)<<"\n __* PRIME - COMPOSITE NUMBER TEST *__"<<endl<<endl;
	
	int i,num;
    char ch='y';
	i=1;
	while (ch=='y'){
		cout<<"Enter the number : ";
		cin>>num;
        primeTest(num);        		
		i++;

        cout<<"Do you wish to continue (y/n)?? ";
        cin>>ch;
	}
    cout<<"\t *PROGRAM ENDS HERE* "<<endl<<endl;
	return 0;
}

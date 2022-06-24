#include<iostream>
#include<iomanip>
using namespace std;

int getInput(){
	int num;
	cout<<"Enter a numerical value here : ";
	cin>>num;
	return num;
}

int operations(int a, int b, char ch){
	int z;
    
    switch(ch){
        case '+' :  z=a+b;
                    break;
        case '*' :  z=a*b;
                    break;
        case '/' :  z=a/b;
                    break;
        case '%' :  z=a%b;
                    break;
        default: cout<<"Invalid Operation";     
    }
    return z;
}


int main(){
    char ch,ch1;
	int a,b,z;
    ch1='y';

    cout<<endl<<"================="<<endl;
    cout<<" + for Addition"<<endl<<" * for Multiplication"<<endl<<" / for Division"<<endl<<" % for Modulus"<<endl;
    cout<<"================="<<endl<<endl;
 
    while (ch1=='y') {
	    a = getInput();	
	    b = getInput();
	    cout<<"\t -> a = "<<a<<endl<<"\t -> b = "<<b<<endl;

        cout<<endl<<"Enter the operation you want to perform : ";
        cin>>ch;
		z=operations(a,b,ch);
        cout<<"\t -> The Result of Operation = "<<z<<endl;
        cout<<endl;
    
        cout<<"Do you want to continue y/n : ";
        cin>>ch1;
    }
	cout<<"\t * Program ends here! * "<<endl;	 

	return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int x;
    double y;
    char ch='A';
    double z;
	bool b=true;
		
	cout<<"\t* USING static_cast<int>(...)*"<<endl;
	cout<<"ASCII value of "<<ch<<" is "<<static_cast<int>(ch)<<endl;
   
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
    cout<<showpoint;
	
	cout<<setw(30)<<"\n * EVALUATING EXPRESSIONS *"<<endl;

 	z=x++%4;
	cout<<"\nz=x++%4"<<endl;
    cout<<"\t -> NEW VALUE of z="<<z<<endl;

    z=x*y+ch;
	cout<<"\nz=x*y+ch"<<endl;
    cout<<"\t -> z="<<z<<endl;
    
	z=x/y+b;
	cout<<"- BOOL b="<<b<<endl;
	cout<<"- z=x/y+b"<<endl;
	cout<<"\t-> NEW VALUE of z="<<z<<endl;
	
	cout<<setw(30)<<"\n * EVALUATING LOGIC EXPRESSIONS *"<<endl;
	
	b=(x>y) || ++x;
	cout<<"-(x>y) || ++x"<<endl;
	cout<<"\t-> new value b="<<b<<" x= "<<x<<endl;
		
	b=(x<y) || x++;
	cout<<"-(x<y) && x++"<<endl;
	cout<<"\t-> new value b="<<b<<" x= "<<x<<endl;
		
	b=(x<y) && ++x;
	cout<<"-(x<y) && ++x"<<endl;
	cout<<"\t-> new value b="<<b<<" x= "<<x<<endl;
	
	return 0;
}


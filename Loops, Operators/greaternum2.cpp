#include<iostream>
#include<iomanip>
using namespace std;

int main(){

cout<<setw(40)<<"__ * COMPARISION OF NUMBERS : C++ PROGRAM * __"<<endl;

float a,b;
cout<<"\nEnter the value of two numbers: ";
cin>>a>>b;

cout<<"\nThe numbers input by the user are "<<a<<" and "<<b<<endl;

cout<<setw(15)<<endl;

if (a<b){
cout<<b<<" is the greater number"<<endl;
}
else{
cout<<a<<" is the greater number"<<endl;}

}


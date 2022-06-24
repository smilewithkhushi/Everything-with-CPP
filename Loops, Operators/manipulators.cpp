#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int num1=123;
    
    cout<<setw(60)<<"___ DEALING WITH MANIPULATORS ___"<<endl;
    cout<<setw(60)<<"[ endl, dec, oct, hex, fixed, showpoint, setw(), setprecision(), setfill() ]"<<endl;

    cout<<"\nValue of num1 : "<<num1<<endl;
    cout<<"num1 as decimal : "<<dec<<num1<<endl;
    cout<<"num1 as octal : "<<oct<<num1<<endl;
    cout<<"num1 as hexadecimal : "<<hex<<num1<<endl;

    float num2=123.456;

    cout<<"\nValue of num2 : "<<num2<<endl;
    
    cout<<"\nnum2 with width 10 : "<<setw(10)<<num2<<endl;
    cout<<"num2 with fill character : "<<setw(10)<<setfill('*')<<num2<<endl;

    cout<<"\nnum2 as fixed floating point decimal : "<<fixed<<num2<<endl;
    cout<<"num2 with set preicision value 2 : "<<setprecision(2)<<num2<<endl;
    cout<<"num2 with the float point value (for 0 setprecision) : "<<setprecision(0)<<showpoint<<num2<<endl;


    return 0;
}
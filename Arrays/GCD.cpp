#include <iostream>
#include <iomanip>
using namespace std;

int gcd(int a, int b){
    while(a!=b){
        if (a>b)       a-=b;
        else        b-=a;
    }
        return a;
}

int main(){
    int a,b;
    cout<<endl;
    cout<<setw(40)<<"* CALCULATE GRATEST COMMON DIVISOR OF NUMBERS*"<<endl<<endl;

    cout<<"-> Enter first number : ";
    cin>>a;

    cout<<"-> Enter second number : ";
    cin>>b;

    cout<<endl<<"The Greatest Common divisor of "<<a<<" and "<<b<<" is : "<<gcd(a,b);

    cout<<endl<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    char ch='K';
    char *p1=&ch;
    cout<<endl<<" ch = "<<ch<<" and p1 = "<<p1<<endl; 

    int a;
    int *p;

    a=14;
    p=&a;
    cout<<"\n a is the variable\n p is the pointer variable"<<endl;
    cout<<" -> a= "<<a<<" &a= "<<&a<<endl;
    cout<<" -> p= "<<p<<" *p= "<<*p<<endl;


    return 0;
}
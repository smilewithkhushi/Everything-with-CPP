#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    cout<<setw(30)<<"___FIBONACCI SERIES___\n"<<endl;
    int num, t1, t2;

    cout<<"How many terms do you want in this fibonacci series : ";
    cin>>num;

    cout<<"Enter the first two terms of Fibonacci series : ";
    cin>>t1>>t2;
    cout<<setw(4)<<t1<<setw(4)<<t2;

    int n=3;
    while (n<=num){
        int sum=t1+t2;
        cout<<setw(4)<<sum;
        t1=t2;
        t2=sum;
        n++;
    }

    return 0;
}


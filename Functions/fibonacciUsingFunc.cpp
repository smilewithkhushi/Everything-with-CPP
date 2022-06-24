#include <iostream>
#include <iomanip>
using namespace std;

void fibonacciSeries(int num, int t1, int t2){
    int n=3;
    while (n<=num){
        int sum=t1+t2;
        cout<<setw(4)<<sum;
        t1=t2;
        t2=sum;
        n++;
    }
return; 
}
int main(){
    int terms, t1, t2;
    cout<<endl<<"\t * FIBONACCI SERIES USING FUNCTIONS * "<<endl<<endl;
    cout<<"How many terms do you want in this fibonacci series : ";
    cin>>terms;
    
    cout<<endl;

    cout<<"Enter the first two terms of Fibonacci series : ";
    cin>>t1>>t2;
    
    cout<<endl;

    cout<<setw(4)<<t1<<setw(4)<<t2;
    
    fibonacciSeries(terms, t1, t2);

    cout<<endl; 
    
    cout<<endl;

    return 0;
}
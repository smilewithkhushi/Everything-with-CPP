#include <iostream>
using namespace std;

int main(){

    int n, i ;
    int sum=0;

    cout<<"This program calculates the sum of numbers from 1 to n"<<endl;
    cout<<"\nEnter the value of n : ";
    cin>>n; 

    for (i=1 ; i<=n; i++) {
        sum=sum+i;
    }

    cout<<"Sum of numbers from 1 to "<<n<<" is : "<<sum;
    return 0;
}

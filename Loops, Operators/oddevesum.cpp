#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num;
    int sumOdd=0;
    int sumEven=0;

    cout<<setw(50)<<"* CALCULATE THE SUM OF ODD AND EVEN NUMBERS *"<<endl;

    cout<<"\nThis program calculates the sum of all odd and even numbers from 1 to n."<<endl;

    cout<<"Enter the value of n : ";
    cin>>num;

    int i=0;
    while (i<=num){
        if (i%2==0){
            sumEven=sumEven+i;
        }
        else{
            sumOdd=sumOdd+i;
        }
        i++;
    }

    cout<<"\nThe SUM of EVEN NUMBERS from 1 to "<<num<<" is "<<sumEven<<endl;
    cout<<"\nThe SUM of ODD NUMBERS from 1 to "<<num<<" is "<<sumOdd<<endl;


    return 0;
}


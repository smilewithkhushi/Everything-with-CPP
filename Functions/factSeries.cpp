#include<iostream>
#include<iomanip>
using namespace std;

int fact(int i)
{
    int pro=1;
    for (int k=1;k<=i;k++)
        pro=pro*k;
    return pro;
}

int main(){
    cout<<"\t* THIS PROGRAM FINDS THE SUM OF SERIES * "<<endl;
    cout<<endl<<"s=1/1!+1/2!+1/3!--- 1/n!"<<endl<<endl;

    double sum=0;
    int n;
    cout<<"-> Enter the value of n : ";
    cin>>n;
    for (int i=1;i<=n;i++){
        int x=fact(i);
        sum=sum+1.0/x;
    }   //cout<<1;

    cout<<"-> The Sum of series is "<<sum<<endl<<endl;

    return 0;

}


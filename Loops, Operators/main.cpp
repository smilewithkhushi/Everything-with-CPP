#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<endl<<setw(80)<<" *   Program that takes the marks from user and displays it in tabular order * "<<endl;
    cout<<endl;
    cout<<endl<<setw(40)<<" __ USING __\n" <<endl;

    int eng,hindi,math,sci,sst;

    cout<<"\nEnter your Marks in English : ";
    cin>>eng;

    cout<<"\nEnter your Marks in Hindi : ";
    cin>>hindi;

    cout<<"\nEnter your Marks in Mathematics: ";
    cin>>math;

    cout<<"\nEnter your Marks in Science : ";
    cin>>sci;

    cout<<"\nEnter your Marks in SST : ";
    cin>>sst;

    cout<<setw(100)<<"ENGLISH"<<"HINDI"<<"MATHEMATICS"<<"SCIENCE"<<"SOCIAL STUDIES"<<"TOTAL";

    return 0;
}

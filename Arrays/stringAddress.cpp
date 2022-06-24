#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main(){
    char array[20];
    int count;
    
    cout<<endl;
    
    cout<<"\t *DISPLAY ADDRESS OF THE STRING CHARACTERS* "<<endl<<endl;
    //take input string and display
    cout<<"Enter the string : ";
    cin>>array;
    
    cout<<endl<<setw(20)<<" -> The input string is : "<<array<<endl;
    cout<<endl<<setw(20)<<" -> The length of string is : "<<strlen(array)<<endl;

    //printing address of alphabets
    cout<<endl;
    cout<<"\t============================"<<endl;    
    cout<<setw(15)<<"*APHABET*"<<setw(15)<<"*ADDRESS*"<<endl;
    void *p;
    for (int i=0; i<strlen(array); i++){    
        cout<<"\t"<<array[i];
        
        p=&array[i];

        cout<<"\t \t"<<p<<endl;
    }
    cout<<"\t============================"<<endl;
    cout<<endl<<endl;
    return 0;
}
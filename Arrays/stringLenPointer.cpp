#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int length(char*p){
    int i=0;
    while (*p){
        i++;
        p=p+1;
    }
return i;
}
int main(){
    char array[20];
    int count;
    
    cout<<endl;
    
    cout<<"\t *DISPLAY LENGTH OF STRING USING POINTERS* "<<endl<<endl;
    //take input string and display
    cout<<"Enter the string : ";
    cin>>array;
    int len=length(array);
    cout<<endl<<"\t -> The input string is : "<<array<<endl;
    cout<<endl<<"\t -> The length of string is : "<<len<<endl;
    
    cout<<endl<<endl;
    return 0;
}
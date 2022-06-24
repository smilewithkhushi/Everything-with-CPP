#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main(){
    char array[20];
    int count;
    
    cout<<endl;
    
    cout<<"\t *DISPLAY OCCURENCES OF THE ALPHABETS* "<<endl<<endl;
    //take input string and display
    cout<<"Enter the string : ";
    cin>>array;
    
    cout<<endl<<"\t -> The input string is : "<<array<<endl;
    cout<<endl<<"\t -> The length of string is : "<<strlen(array)<<endl;

    //finding occurences of alphabets
    cout<<endl;
    cout<<"============================"<<endl;
    for(char j='A'; j<='z';j++){
        count=0;
        
        for (int i=0; i<strlen(array); i++){
            if (array[i]==j){
                count+=1;
            }       
        }
        if (count!=0) 
        cout<<setw(5)<<j<<setw(5)<<" occurs "<<setw(5)<<count<<" times"<<endl;
    }
    cout<<"============================"<<endl;
    cout<<endl<<endl;
    return 0;
}
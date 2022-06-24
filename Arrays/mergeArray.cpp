#include <iostream>
#include <iomanip>
using namespace std;

void inputArray(int a[], int size){
    for (int i=0; i<size; i++){
        cin>>a[i];
    }
} // input Array

void mergeArray(int a[], int b[], int output[], int s1, int s2){
    int i=0;
    int j=0;
    int k=0;

    while (i<s1 && j<s2){
        if (a[i]<b[j])
        output[k++]=a[i++];
        else
        output[k++]=b[j++];
    
    while (i<s1){
        output[k++]=a[i++]; }
    while (j<s2){
        output[k++]=b[j++]; }

    } 
}

void displayArray(int output[], int size){
    for (int i=0; i<size; i++)
        cout<<setw(5)<<output[i];
}//displayArray

int main(){
    cout<<endl;
    cout<<"\t \t* MERGE TWO SORTED ARRAYS *"<<endl<<endl;

    int size1, size2;
    int size3=size1+size2;
    char ch='y';
    while (ch=='y'){
        cout<<"Enter the size of first array : ";
        cin>>size1;
        cout<<"Enter the size of second array : ";
        cin>>size2;
        cout<<endl;
        int array1[size1];
        int array2[size2];
        int output[size3];

        cout<<endl<<"Enter the first array : ";
        inputArray(array1, size1);
        cout<<endl<<"Enter the second array : ";
        inputArray(array2, size2);

        cout<<endl<<"The merged array : "<<endl;
        mergeArray(array1,array2, output, size1, size2);
        displayArray(output, size3);
        
        cout<<endl<<"Do you want to continue (y/n) : ";
        cin>>ch;
        cout<<endl;
    }
    return 0;
}
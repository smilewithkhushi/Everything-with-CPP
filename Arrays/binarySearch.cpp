#include<iostream>
#include<iomanip>
using namespace std;

void inputArray(int array[], int size);
void binarySearch(int array[], int low, int high, int element, int& locn);
void displayArray(int array[], int size);
//prototype declarations
int main(){
    int size, searchElement;
    int locn=-1;
    cout<<endl<<"\t* BINARY SEARCH PROGRAM *"<<endl<<endl;

    cout<<"How many elements do you want to enter in array : ";
    cin>>size;
    int array[size];
    inputArray(array, size);

    cout<<"Enter the element you want to search : ";
    cin>>searchElement;
    cout<<endl;

    binarySearch(array, 0, size-1, searchElement, locn);
    cout<<endl;
    if (locn!=-1)    cout<<"Element Found at position "<<locn+1<<endl;
    else            cout<<"Element not found!"<<endl;


    displayArray(array, size);
    cout<<endl;
    return 0;
}

void inputArray(int array[], int size){
    cout<<endl;
    cout<<"Enter "<<size<<" elements for the array : ";
    for (int i=0; i<size; i++)
    cin>>array[i];
    cout<<endl;
}

void binarySearch(int array[], int low, int high, int element, int& locn){
    int mid;
    while (low<=high){
        mid=low+high/2;
        if (element==array[mid]){
            locn=mid;
            return;
        } // first condition : mid==element

        else if (array[mid]<element)
            low=mid+1;
        else if (array[mid]>element)
            high=mid-1;        
        
    }
}
//binary search

void displayArray(int array[], int size){
    cout<<"The Elements of the array are : "<<endl;
    for (int i=0; i<size; i++)
    cout<<setw(5)<<array[i];
    cout<<endl;
}//display array
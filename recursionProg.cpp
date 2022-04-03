#include<iostream>
#include<iomanip>
using namespace std;
//fibonacci series
int fibonacci(int n){
    if (n==1 || n==2) return 1;
    if (n>2)
        return (fibonacci(n-1)+fibonacci(n-2));
}
int fact(int n){
    if (n==1)   return 1;
    else
    return (n*fact(n-1));
}//factorial program
int gcd(int a, int b){
    if (a%b==0)  return b;
    else return gcd(b,a%b);
}//Greatest commond divisor
void binarysearch(int a[], int low, int high){
    int mid;
    if (low>high)   return -1;
    else{
        mid=(low+high)/2;   
        if (a[mid]==x){
            loc=mid;
            return;
        }
        else if(a[mid>x])
        binarysearch(a, low,mid-1,x,loc);
        else
        binarysearch(a,mid+1,high,x,loc);
    }
    return -1;
}
int main(){
    
    int terms,num, n1,n2, x1;
    
    int choice;
    char ch='y';
    while (ch=='y'){
        cout<<endl<<"==================="<<endl;

        cout<<"1. FIBONACCI SERIES"<<endl;
        cout<<"2. FACTORIAL NUMBER"<<endl;
        cout<<"3. GCD OF NUMBERS"<<endl;
        cout<<"4. Binary Search"<<endl;
        cout<<"==================="<<endl;
        cout<<endl;

    //take choice from user
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1: cout<<"Enter total number of terms for fibocnacci series : ";
                cin>>terms;
                for (int i; i<terms; i++)
                cout<<setw(5)<<fibonacci(i);
                cout<<endl;
                break;
                //fibonacci series

        case 2: cout<<"Enter the number for factorial : ";
                cin>>num;
                cout<<endl<<"Factorial of number is : "<<fact(num)<<endl;
                break;

        case 3: cout<<"Enter two numbers to find GCD : ";
                cin>>n1>>n2;
                cout<<endl<<"GCD is "<<gcd(n1,n2)<<endl;
                break;

        case 4: cout<<"Binary Search of number in array[5]"<<endl;
                
                int arrayNum[5];
                cout<<endl<<"Enter element of the array : ";
                for (int i=0; i<5; i++)
                cin>>arrayNum[i];
                cout<<"Enter the element to be searched : ";
                cin>>x1;
                binarysearch(arrayNum, 0, 4, x1, loc);
                if (loc!=-1)
                cout<<"Element found : "<<(loc+1);
                else
                cout<<"Element not found."<<endl;
    }
    cout<<endl<<"\t -> Do you want to continue(y/n) : ";
    cin>>ch;
    cout<<endl;
    }
    return 0;
} //advantages - readibility and shorter code
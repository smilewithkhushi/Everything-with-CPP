#include <iostream>
#include <iomanip>
using namespace std;

int inputMatrix(int m[][3]){
    for (int i=0; i<3; i++){
        cout<<"Enter the elements for row "<<i+1<<" : ";
        for (int j=0; j<3; j++)
        cin>>m[i][j];
    }
}
int addition(int m1[][3], int m2[][3], int sum[][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++)
            sum[i][j]=m1[i][j]+m2[i][j];
    }
}

int subtraction(int m1[][3], int m2[][3], int difference[][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++)
            difference[i][j]=m1[i][j]-m2[i][j];
    }
}
int displayMatrix(int m[][3]){
    cout<<endl<<"============================="<<endl<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++)
        cout<<setw(5)<<m[i][j];
        cout<<endl;
    }
    cout<<endl<<"============================="<<endl<<endl;
}


int main(){
    cout<<"\t * MATRIX ADDITION AND SUBTRACTION (3x3) *" <<endl<<endl;

    cout<<"========================"<<endl;
    cout<<"\t SELECT : "<<endl<<endl;
    cout<<" 1. MATRIX ADDITION "<<endl;
    cout<<" 2. MATRIX SUBTRACTION "<<endl;
    cout<<"========================"<<endl;

    int choice, size;
    int matrix1[3][3];
    int matrix2[3][3];
    int difference[3][3];
    int sum[3][3];

    char ch='y';
    while (ch=='y'){
        cout<<"What operation do you want to perform (1 or 2)?? ";
        cin>>choice;

        cout<<endl<<"\t * ENTER ELEMENTS FOR MATRIX 1 *"<<endl;
        inputMatrix(matrix1);
        cout<<endl<<"\t * ENTER ELEMENTS FOR MATRIX 2 *"<<endl;
        inputMatrix(matrix2);

    switch(choice){ 
        case 1: addition(matrix1, matrix2, sum);
                cout<<endl<<setw(20)<<"* SUM OF MATRIX *";
                displayMatrix(sum);
                break;
        case 2: subtraction(matrix1, matrix2, difference);
                cout<<endl<<setw(20)<<" * DIFFERENCE OF MATRIX *";
                displayMatrix(difference);
                break;
        default : cout<<"INVALID CHOICE! "<<endl;
    }
    cout<<"Do you want to continue(y/n)? ";
    cin>>ch;
    cout<<endl;
    }
    return 0;
}
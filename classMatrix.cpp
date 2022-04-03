#include <iostream>
#include <iomanip>
using namespace std;

class matrix{
    int a[5][5]; //objects will represent one array only
    int row,col;
    //default private members

    public:
    matrix(int row1=5, int col1=5){
        this.row=row;
        this.col=col;
        for (int i=0; i<row; i++)
        for (int j=0; j<col; j++)
        a[i][j]=0;

    //constructor
    void input();
    void display();
    matrix multiply(matrix o1);
    matrix add(matrix o1);
    matrix subtract(matrix o2);
    matrix transpose();   
};

matrix matrix :: transpose(){
    matrix temp;
    temp.row=col;
    temp.col=row;
    for (int i=0; i<temp.row, i++)
    for (int j=0; j<temp.col; j++)
    temp.a[i][j]=a[j][i];
    return temp;
}
void matrix:: display(){
    cout<<"Matrix is"<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++)
        cout<<setw(3)<<a[i][j];
        cout<<endl;
    }
}
void matrix :: input(){
    for(int i=0; i<row;i++){
        cout<<"Enter the elements of row : "<<(i+1);
        for(int j=0;j<col;j++)
        cin>>a[i][j];
    }
}

void matrix::multiply(matrix o1){
    matrix o3;
    if (col==o1.row){
        o3.row=row;
        o3.col=col;
        for (int i=0;i<row;i++){
            for(int j=0; j<o1.col; j++){
                o3.a[i][j]=0;
                for (int k=0; k<col; k++)
                o3.a[i][j]=a[i][j]+a[i][k]*b[k][j];
            }
        }
        return o3;
    }
    else
    cout<<"Invalid order of matrix multiplication!"<<endl;
}

int main(){
    //A B C 
    matrix o1(3,4),o2(4,3), o3(3,3), o4(3,3);     //3 objects
    o1.input();                 //object uses input function
    o2.input();
    o3=o1.multiply(o2);          //object uses multiply function
    o4=o1.transpose();
    cout<<"transpose is "<<endl;
    o4.display();
    
    return 0;
}
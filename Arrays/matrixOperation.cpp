#include <iostream>
#include <iomanip>
using namespace std;

int inputMatrix(int m[][3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the elements for row " << i + 1 << " : ";
        for (int j = 0; j < 3; j++)
            cin >> m[i][j];
    }
    return 0;
}
int addition(int m1[][3], int m2[][3], int sum[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            sum[i][j] = m1[i][j] + m2[i][j];
    }
    return 0;
}

int subtraction(int m1[][3], int m2[][3], int difference[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            difference[i][j] = m1[i][j] - m2[i][j];
    }
    return 0;
}
int multiplication(int m1[][3], int m2[][3], int prod[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            prod[i][j] = m1[i][j] * m2[i][j];
    }
    return 0;
}
int transpose(int m[][3], int trans[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i] = m[i][j];
        }
    }
    return 0;
}

int displayMatrix(int m[][3])
{
    cout << endl
         << "=============================" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << setw(5) << m[i][j];
        cout << endl;
    }
    cout << "=============================" << endl
         << endl;
    return 0;
}

int symmetricTest(int m[][3])
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] != m[j][i])
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << " is a Symmetric Matrix! " << endl;
    }
    else
    {
        cout << " is not a Symmetric Matrix!" << endl;
    }
    cout << endl;
    return 0;
}

int skewSymmTest(int m[][3])
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] == -m[j][i])
            {
                flag = 1;
            }
        }
    }
    if (flag != 0)
    {
        cout << " is a Skew Symmetric Matrix! " << endl;
    }
    else
    {
        cout << " is not a Skew Symmetric Matrix!" << endl;
    }
    cout << endl;
    return 0;
}

int main()
{
    cout << "\t * MATRIX OPERATIONS (3x3) *" << endl
         << endl;

    cout << "========================" << endl;
    cout << "\t SELECT : " << endl
         << endl;
    cout << " 1. MATRIX ADDITION " << endl;
    cout << " 2. MATRIX SUBTRACTION " << endl;
    cout << " 3. MATRIX MULTIPLICATION " << endl;
    cout << " 4. MATRIX TRANSPOSE " << endl;
    cout << " 5. SYMMETRIC MATRIX TEST " << endl;
    cout << " 6. SKEW SYMMETRIC MATRIX TEST " << endl;
    cout << "========================" << endl;

    int choice, size;
    int matrix1[3][3];
    int matrix2[3][3];
    int difference[3][3];
    int sum[3][3];
    int prod[3][3];
    int trans[3][3];

    char ch = 'y';
    while (ch == 'y')
    {

        cout << endl
             << "\t * ENTER ELEMENTS FOR MATRIX 1 *" << endl;
        inputMatrix(matrix1);
        cout << endl
             << "\t * ENTER ELEMENTS FOR MATRIX 2 *" << endl;
        inputMatrix(matrix2);

        cout << endl
             << "What operation do you want to perform ?? ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addition(matrix1, matrix2, sum);
            cout << endl
                 << " ------> OPERATION SELECTED : ADDITION *" << endl;
            cout << "-> In mathematics, matrix addition is the operation of adding two matrices\n by adding the corresponding entries together." << endl;
            cout << endl
                 << setw(20) << "* SUM OF MATRICES *";
            displayMatrix(sum);
            break;
        case 2:
            subtraction(matrix1, matrix2, difference);
            cout << endl
                 << " ------> OPERATION SELECTED : SUBTRACTION *" << endl;
            cout << "-> In mathematics, matrix subtraction is the operation of subtracting two matrices\n by subtracting the corresponding entries together." << endl;

            cout << endl
                 << setw(20) << " * DIFFERENCE OF MATRICES *";
            displayMatrix(difference);
            break;

        case 3:
            multiplication(matrix1, matrix2, prod);
            cout << endl
                 << " ------> OPERATION SELECTED : MULTIPLICATION *" << endl;
            cout << "-> In mathematics, matrix multiplication is the operation of multiplying two matrices\n by multiplying the corresponding entries together." << endl;

            cout << endl
                 << setw(20) << " * PRODUCT OF MATRICES *";
            displayMatrix(prod);
            break;

        case 4:
            transpose(matrix1, trans);
            cout << endl
                 << " ------> OPERATION SELECTED : TRANSPOSE *" << endl;
            cout << "-> In mathematics, the transpose of a matrix is found by interchanging\n its rows into columns or columns into rows." << endl;
            cout << endl
                 << setw(20) << " * TRANSPOSE OF MATRIX 1 *";
            displayMatrix(trans);
            transpose(matrix2, trans);
            cout << endl
                 << setw(20) << " * TRANSPOSE OF MATRIX 2 *";
            displayMatrix(trans);
            break;

        case 5:
            symmetricTest(matrix1);
            cout << endl
                 << " ------> OPERATION SELECTED : SYMMETRIC MATRIX TEST *" << endl;
            cout << "-> A symmetric matrix in linear algebra is a square matrix that remains unaltered\n when its transpose is calculated" << endl;
            cout << endl
                 << " Matrix 1 ";
            symmetricTest(matrix1);
            cout << endl
                 << " Matrix 2 ";
            symmetricTest(matrix2);
            break;

        case 6:
            skewSymmTest(matrix1);
            cout << endl
                 << " ------> OPERATION SELECTED : SKEW SYMMETRIC MATRIX TEST *" << endl;
            cout << "-> a skew symmetric matrix is defined as the square matrix that is equal \n to the negative of its transpose matrix." << endl;
            cout << endl
                 << " Matrix 1 ";
            skewSymmTest(matrix1);
            cout << endl
                 << " Matrix 2 ";
            skewSymmTest(matrix2);
            break;

        default:
            cout << "INVALID CHOICE! " << endl;
        }
        cout << "Do you want to continue this program (y/n)? ";
        cin >> ch;
        cout << endl;
    }
    return 0;
}
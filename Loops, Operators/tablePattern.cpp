#include<iostream>
#include<iomanip>
using namespace std;

/*  2 4 6 8 10
    3 6 9 12 15
    4 8 10 16 20*/

int main(){

	cout<<setw(45)<<"* PRINTING TABLES OF NUMBERS *\n"<<endl;

    for (int k=2; k<10; k++){
	int i=1;

        for (int p=1; p<=10; p++){
			if (i>5) {
				cout<<endl;
				i=1; }
			 cout<<setw(4)<<k*p;
		 	 i++;
        }
	
        cout<<endl;
		cout<<endl;
    }

    return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;

void getInput(){
	return;
}

int main(){
	int rows;
	cout<<endl<<"Enter the number of rows : ";
	cin>>rows;

	cout<<endl;

	for (int i=0; i<rows; i++){
		int val=1;
		for (int j=1; j<(rows-1); j++){
			cout<<" ";
		}
		for (int k=0; k<=i; k++){
			cout<<" "<<val;
			val=val*(i-k)/(k+1);
		}
		cout<<endl<<endl;
	}
	cout<<endl;

	return 0;
}
#include<iostream>
 using namespace std;

int main(){
	cout<<"\t__ NESTED IF-ELSE STATEMETS: __"<<endl;
	
	for (int i=0; i<5; i++) {
	
	int x;
	cout<<"\nEnter a number : ";
	cin>>x;
	
	if (x<=20){
		cout<<x<<" is smaller than 20"<<endl;
		if (x%5==0)	cout<<"\t-> "<<x<<" is multiple of 5"<<endl;
		else cout<<"\t-> "<<x<<" is not multiple of 5"<<endl;
	}
	
	else cout<<x<<" is greater than 20"<<endl;
	}
	
	return 0;
	}




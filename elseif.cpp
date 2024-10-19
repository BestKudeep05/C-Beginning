#include<iostream>
using namespace std;

int main() {
	
	cout<<"if else 2\n";
	
	int a;
	cout<<"Enter marks : ";
	cin>>a;
	
	if (a >= 90){
		cout<<"A\n";
		
	}
	else if((a>=80) && (a<90)){
		cout<<"B";
		
	}
	else if((a>=70) && (a<80)){
		cout<<"C";
		
	}
	else if((a>=60) && (a<70)){
		cout<<"D";
	}
	else{
		cout<<"Fail";
	}
return 0;
}
		
		
#include<iostream>
using namespace std;
int main(){
	int no,f=1;
	cout<<"enter the no\n";
	cin>>no;
	for(int i=no;i>1;i--){
		f=f*i;
	}
	cout<<"Factorial of "<<no<<" is "<<f;
	
	
	
}
#include<iostream>
using namespace std;
int main(){
	int no,r;
	cout<<"enter the no\n";
	cin>>no;
	cout<<"enter the range\n";
	cin>>r;
	system("cls");
	for(int i=1;i<=r;i++){
		cout<<no<<" X "<<i<<" = "<<no*i<<endl;
	}
	
}
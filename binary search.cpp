#include<iostream>
using namespace std;
int main(){
int arr[5] = {1, 3, 5, 7, 9};
int k=1,l=0,h=5,m=0;
while(l<=h){
	m=(l+h)/2;
	if(arr[m]==k){
		cout<<"the no is at index "<<m;
		break;
	}
	else if(arr[m]>k){
		l=0;
		h=m-1;
	}
	else{
		l=m+1;
	}
}
}

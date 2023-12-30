//Left Rotation :: Rotate an Array to 'D' postion
//Going with cpp for dynamic array alocation

#include<iostream>
using namespace std;
int main(){
	int n,d;
	cout<<"Enter the Size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//logic for rotating an array
	cout<<"Enter the Number of position to be rotate (D)"<<endl;
	cin>>d;
	int temp[d];
	for(int i=0;i<d;i++){
		temp[i]=a[i];
	}
	
	d=d%n; //its avoid unncessary iteration
	cout<<"Accurate Iteration "<<d<<endl;
	
	//shifting an array 
	for(int i=d;i<n;i++){
		a[i-d]=a[i];
	}

	for(int i=n-d;i<n;i++){
		a[i]=temp[i-(n-d)];
		
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	
}

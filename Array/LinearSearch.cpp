//Linear search 
#include<iostream>
using namespace std;

int main(){
	int n,num,f=0;
	cout<<"Enter the Size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter number to be search";
	cin>>num;
	for(int i=0;i<n;i++){
		if(num==a[i]){
			cout<<"Number found at : "<<i+1<<endl;
			f=1;
			continue;
		}
	}
	if(f==0){
		cout<<"Number not Found";
	}
}

	

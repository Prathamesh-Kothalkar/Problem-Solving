//Moves zero to the ends without using or aviding vector
//lets the swap the value 
#include<iostream>
using namespace std;
void xswap(int *a,int*b);
int main(){
	int n;
	cout<<"Enter the Size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//logic;
	int zin=0;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			xswap(&a[i],&a[zin]);
			zin++;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

void xswap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

//Find a missing element in an Array.
//Array range from  1 to n
#include<iostream>
#include<array>
using namespace std;
int missingElement(int a[],int n){
	int sum=0,num,e;
	num=(n*(n+1))/2;
	for(int i=0;i<n;i++){
		sum+=a[i];	
	}
	e=num-sum;
	return e;
}
int main(){
	int n=6;
	int a[]={1,2,3,5,4,6};
	int e = missingElement(a,n);
	if(e==0){
		cout<<"All Element is present in array";
	}
	else{
		cout<<"Missing Element is:"<<e;
	}
	
	
} 

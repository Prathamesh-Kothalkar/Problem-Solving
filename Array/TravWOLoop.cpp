//Access an Array without using For/While/do etc loop 
//using Recursion

#include<iostream>
using namespace std;
void printElement(int arr[],int size);
//void printElement(int arr[],int size,int count);
int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	printElement(a,n);
	return 0;
}

//void printElement(int arr[],int size,int count){
//	if(size!=count){
//		cout<<arr[count]<<" ";
//		printElement(arr,size,count+1);
//	}
	
void printElement(int arr[],int size){
	if(size>0){
		cout<<arr[0]<<" ";
		printElement(arr+1,size-1);
	}

}

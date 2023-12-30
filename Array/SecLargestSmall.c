//Find the Second Smallest and Largest number in an array;

#include<stdio.h>
#include<limits.h>
#define MAX 5
//functions
int largest(int a[]);
int smallest(int a[]);
//main
int main(){
	int arr[MAX],i,small,large;
    printf("Enter Array Element\n");
    for(i=0;i<MAX;i++){
    	scanf("%d",&arr[i]);
	}
	small=smallest(arr);
	large=largest(arr);
	printf("Smallest:%d  Largest:%d",small,large);
}

//logic smallest
int smallest(int a[]){
	int smallest=a[0],i;
	int ssmall=INT_MAX;
	for(i=0;i<MAX;i++){
		if(smallest>a[i]){
			ssmall=smallest;
			smallest=a[i];
		}
		else if(a[i]>smallest && a[i]<ssmall){
			ssmall=a[i];
		}
	}
	return ssmall;
}

//logic Largest
int largest(int a[]){
	int largest=a[0],i;
	int slarge=INT_MIN;
	for(i=0;i<MAX;i++){
		if(largest<a[i]){
			slarge=largest;
			largest=a[i];
		}
		else if(largest>a[i] && slarge<a[i]){
			slarge=a[i];
		}
	}
	return slarge;
}

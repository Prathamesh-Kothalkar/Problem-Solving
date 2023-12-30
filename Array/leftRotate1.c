//Left Roatation :: rotate array to the left by one Position
#include<stdio.h>
#define MAX 5
int main(){
	int a[MAX],i,temp;
	printf("Enter Array Element\n");
    for(i=0;i<MAX;i++){
    	scanf("%d",&a[i]);
	}
	//logic to rotate anArray by one 
	temp=a[0];
	for(i=1;i<MAX;i++){
		a[i-1]=a[i];
	}
	a[MAX-1]=temp;
	
	//printing an Array
	  for(i=0;i<MAX;i++){
    	printf("%d ",a[i]);
	}
}

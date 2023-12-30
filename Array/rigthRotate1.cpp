//Rigth Roatation :: rotate array to the left by one Position
#include<stdio.h>
#define MAX 5
int main(){
	int a[MAX],i,temp;
	printf("Enter Array Element\n");
    for(i=0;i<MAX;i++){
    	scanf("%d",&a[i]);
	}
	//logic to rotate anArray by one 
	temp=a[MAX-1]; //it store last value
	for(i=MAX-1;i!=0;i--){
		a[i]=a[i-1];
	}
	a[0]=temp;
	
	//printing an Array
	  for(i=0;i<MAX;i++){
    	printf("%d ",a[i]);
	}
}

#include<stdio.h>
int main(){
    int a[5];
    int largest,i;
    printf("Enter Array Element\n");
    for(i=0;i<5;i++){
    	scanf("%d",&a[i]);
	}
    largest=a[0];
	for(i=0;i<5;i++){
		if(largest<a[i]){
			largest=a[i];
		}
	}
	printf("Largest Element is: %d",largest);
	return 1;
}

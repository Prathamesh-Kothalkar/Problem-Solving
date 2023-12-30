//Array is Sorted or not;

#include<stdio.h>

int main(){
	int a[5],i,f=0,prev;
    printf("Enter Array Element\n");
    for(i=0;i<5;i++){
    	scanf("%d",&a[i]);
	}
	//Logic to find is it Sorted or not
	prev=a[0];
	for(i=0;i<4;i++){
		if(prev<a[i+1]){
			prev=a[i];
			f=1;
			continue;
		}
		else{
			f=0;
			break;
		}
	}
	
	if(f==1){
		printf("Array is Sorted");
	}
	else{
		printf("Array is not Sorted");
	}
}

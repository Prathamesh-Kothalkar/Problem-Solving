//Remove Duplicate value From Array where Array is Sorted;
#include<stdio.h>
int main(){
	int a[5],i,temp;
    printf("Enter Array Element\n");
    for(i=0;i<5;i++){
    	scanf("%d",&a[i]);
	}
	//logic for removing Duplicate values
	temp=a[0];
	printf("\n%d",temp);
	for(i=1;i<5;i++){
    	if(temp==a[i]){
    		continue;	
		}
		else{
			temp=a[i];
			printf("\n%d",temp);
			
		}
	}
	
}

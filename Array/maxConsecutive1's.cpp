//Max Consecutive 1's
//i/p a=[1,1,0,0,1,1,1,0,0,1,1] o/p:-3
#include<iostream>
using namespace std;
int max1s(int a[],int n){
	int count=0,max=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			count++;
		}
		else{
			if(count>max){
				max=count;
			}
			count=0;
		}
	}
	if(count>max)//For last occurence
	{
		max=count;
	}
	return max;
}

int main(){
	int n;
	cout<<"Enter the Size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"1's:"<<max1s(a,n);
}

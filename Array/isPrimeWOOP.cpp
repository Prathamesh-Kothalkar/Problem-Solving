//print all even number in an Array without using "Arthmetic Operator"

#include<iostream>
using namespace std;
bool isEven(int n);
int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"====Even Numbers===="<<endl;
	for(int i=0;i<n;i++){
		if(isEven(a[i])){
			cout<<a[i]<<endl;
		}
	}
	cout<<"====ODD Numbers===="<<endl;
	for(int i=0;i<n;i++){
		if(!isEven(a[i])){
			cout<<a[i]<<endl;
		}
	}
	return 0;
}

bool isEven(int n){
	if((n&1)==0){
		return true;
	}
	else{
		return false;
	}
}

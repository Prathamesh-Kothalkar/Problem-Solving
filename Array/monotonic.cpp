#include<iostream>
using namespace std;
bool isMonotonic(int a[],int n);
int main(){
	int a[]={1,2,2,3,3};
	int n=sizeof(a)/sizeof(a[0]);
	bool isMono = isMonotonic(a,n);
	if(isMono){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}

//bool isMonotonic(int a[],int n){
//   bool isAsc = a[0]<a[1]?true:false;
//   if(isAsc){
//   	 for(int i=0;i<n-1;i++){
//   		if(a[i]>a[i+1]){
//   			return false;
//		}
//	}
//   }
//   else{
//   	for(int i=0;i<n-1;i++){
//   		if(a[i]<a[i+1]){
//   			return false;
//		}
//	}
//   }
//   
//   return true;
//}

 bool isMonotonic(int a[],int n){
 	bool isValid=true;
 	for(int i=0;i<n-1;i++){
 		if((a[i]<a[i+1])!=(a[0]<a[1])){
 			isValid=false;	
		 }
	 }
	return isValid;
 }

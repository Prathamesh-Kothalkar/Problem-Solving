// Move 0 to the end in an array;
#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
	int n;
	
	cout<<"Enter the Size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//logic to move 0 to the end 
	vector<int> temp;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			temp.push_back(a[i]);
		}
	}
	
	for(int i=0;i<temp.size();i++){
		a[i]=temp[i];
	}
	
	for(int i=temp.size();i<n;i++){
		a[i]=0;
	}
	
 	for(int i=0;i<n;i++){
		cout<<a[i];
	}
    
} 

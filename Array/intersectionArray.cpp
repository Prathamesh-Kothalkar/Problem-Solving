//Intersection Array
#include<iostream>
#include<vector>
using namespace std;

int main(){
	//Reading first array
	int n1,n2;
	cout<<"Enter the Size of array"<<endl;
	cin>>n1;
	int a[n1];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
	//Reading Second Array
	cout<<"Enter the Size of Second array"<<endl;
	cin>>n2;
	int b[n2];
	cout<<"Enter the Second Array Element"<<endl;
	for(int i=0;i<n2;i++){
		cin>>b[i];
	}
	
	//Logic 
	vector<int>interArr;
	int i=0,j=0;
	while(i<n1 && j<n2){
		if(a[i]==b[j]){
			interArr.push_back(a[i]);
			j++;
		}
		
	   i++;
	}
	
	//Displaying Vector
	for(i=0;i<interArr.size();i++){
		cout<<interArr[i]<<", ";
	}
}
	

//Union array with optimal solution 
//only when Array is sorted okay
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
	
	//logic to union assuming thje arr is Sorted;
	vector<int>unionArr;
	int i=0,j=0;//i denoted to a array and j denoted to b array
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])//check a[i] is larger then b[j]
		{
			if(unionArr.size()==0 || unionArr.back()!=a[i]){
				unionArr.push_back(a[i]);
			}
			
			i++;
		}
		else{
			if(unionArr.size()==0 || unionArr.back()!=b[j]){
				unionArr.push_back(b[j]);
			}
			j++;
		}
	}
	
	while(i<n1){
		if(unionArr.size()==0 || unionArr.back()!=a[i]){
				unionArr.push_back(a[i]);
			}
			
			i++;	
	}
	
	while(j<n2){
		if(unionArr.size()==0 || unionArr.back()!=b[j]){
				unionArr.push_back(b[j]);
		}
		j++;
	}
	  
	//Displaying Vector
	for(i=0;i<unionArr.size();i++){
		cout<<unionArr[i]<<", ";
	}
}

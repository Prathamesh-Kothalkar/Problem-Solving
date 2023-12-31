//Right Rotation :: Rotate an Array to 'D' postion


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,d;
	cout<<"Enter the Size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//logic for rotating an array
	cout<<"Enter the Number of position to be rotate (D)"<<endl;
	cin>>d;
	d=d%n;
	reverse(a,a+d);
	reverse(a+d,a+n);
	reverse(a,a+n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
    return 0;	
}

////Left Rotation :: Rotate an Array to 'D' postion
//Going with cpp for dynamic array alocation
//it is a optimal way ; 
//it provide efficent Space Complexity o(1):: dont use any additional array; 
//it required more time complexity 0(2n);

#include<iostream>
#include <algorithm> // for std::reverse
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
	
	reverse(a,a+d);
	reverse(a+d,a+n);
	reverse(a,a+n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

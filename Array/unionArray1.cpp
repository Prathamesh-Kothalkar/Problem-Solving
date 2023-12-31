//Union Array 
#include<iostream>
#include<set>

using namespace std;
int main(){
	int n1,n2;
	cout<<"Enter the Size of array"<<endl;
	cin>>n1;
	int a[n1];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
	cout<<"Enter the Size of Second array"<<endl;
	cin>>n2;
	int b[n2];
	cout<<"Enter the Second Array Element"<<endl;
	for(int i=0;i<n2;i++){
		cin>>b[i];
	}
	set<int>un;
	for(int i=0;i<n1;i++){
		un.insert(a[i]);
	}
	for(int i=0;i<n2;i++){
		un.insert(b[i]);
	}
	for (auto it : un)
        cout << it << " ";
	return 0;
}

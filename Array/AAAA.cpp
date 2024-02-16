#include<iostream>
using namespace std;
void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void nForest2(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void nForest3(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}

void nForest4(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}

void nForest5(int n) {
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}

void nForest6(int n) {
	int temp = n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=temp;j++){
			cout<<j;
		}
		temp--;
		cout<<endl;
	}
}

void nForest7(int n) {
	for(int i =0;i<n-1;i++){
		//space
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		//star
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		
			for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		 cout<<endl;
		}
	}
	
void nForest8(int n){
	for(int i=0;i<=n-1;i++){
		//space
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		//star
		for(int j=0;j<2*n-(2*i+1);j++){
			cout<<"*";
		}
		//space
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
	

void nForest9(int n){
//	nForest7(n);
//	nForest8(n);
	for(int i=0;i<n-1;i++){
		//space
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		//star
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		//space
		for(int j=0;j<n-i-1;j++){
			cout<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<=n-1;i++){
		//space
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		//star
		for(int j=0;j<2*n-(2*i+1);j++){
			cout<<"*";
		}
		//space
			for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;	
	}
		
}

void nForest10(int n){
	for(int i=1;i<2*n-1;i++){
		int star=i;
		if(i>n)
		star=2*n-i;
		
		for(int j=1;j<star;j++){
			cout<<"*";
		}	
		cout<<endl;
	}
}

void nForest11(int n){
	int num=1;
	for(int i=1;i<n;i++){
		if(i%2==0)
			num=1;
		else
			num=0;
		
		for(int j=0;j<i;j++){
			cout<<num;
			num=1-num;
		}
		cout<<endl;
	}
}

void nForest12(int n){
	int space=2*(n-1); //2x4-1==6 space intially
	for(int i=1;i<=n;i++){
		//number
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		//space
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		
		//number
		for(int j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
		space-=2;
	}
}

void nForest13(int n){
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<count++<<" ";
		}
		cout<<endl;
	}
}

void nForest14(int n){
	for(int i=0;i<n;i++){
	   for(char ch='A';ch<='A'+i;ch++){
	   	cout<<ch<<" ";
	   }
	   cout<<endl;
	}
}

void nForest15(int n){
	for(int i=n;i>=1;i--){
	   for(char ch='A';ch<'A'+i;ch++){
	   	cout<<ch<<" ";
	   }
	   cout<<endl;
	}
}

void nForest16(int n){
	for(int i=0;i<n;i++){
		char ch='A'+i;
		for(int j=0;j<=i;j++){
			cout<<ch;
		}
		cout<<endl;
	}
}		





int main(){
	nForest(5);
	nForest2(5);
	nForest3(5);
	nForest4(5);
	nForest5(5);
	nForest6(5);
	nForest7(5);
	nForest8(5);
	nForest9(5);
	nForest11(6);
	return 0;
}

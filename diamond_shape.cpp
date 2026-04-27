#include<iostream>
using namespace std;
int dimond_shape(){
	int i;
	int j;
    int n;
	cout<<"Enter value for n number: \n";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=n;j>0;j--){
			if(i>=j){
				
			cout<<"*"<<" ";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	for(i=1;i<=n;i++){
	for(j=n;j>0;j--){
			if(i+j<=n){
				
			cout<<"*"<<" ";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
int main(){
	cout<<dimond_shape();
	return 0;
}

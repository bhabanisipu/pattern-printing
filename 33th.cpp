#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"enter a number ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2==0){
				cout<<(char)(64+j);
			}
			else{
				cout<<j;
			}
		}
		cout<<endl;
	}
}
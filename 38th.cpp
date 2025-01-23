#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int n;
    cout<<"enter number : ";
    cin>>n;
    for(i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(i=1;i<=m;i++){
        for(k=1;k<=n-i;k++){
            cout<<"*";
        }
        for(j=1;j<=nsp;j++){
            cout<<" ";
            
        }
        nsp+=2;
        for(k=1;k<=n-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
        
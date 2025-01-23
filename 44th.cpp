#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"enter a number ";
    cin>>n;
    for(i=1;i<=2*n-1;i++){
        cout<<(char)(64+i);
    }
    cout<<endl;
    int nsp=1;
    int m=n-1;
    for(i=1;i<=m;i++){
       int a=1;
        for(j=1;j<=n-i;j++){
            cout<<(char)(64+a);
            a++;
        }
        for(k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(j=1;j<=n-i;j++){
            cout<<(char)(64+a);
            a++;
        }
        cout<<endl;
    }
}
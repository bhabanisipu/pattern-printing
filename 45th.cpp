#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(k=1;k<=n+1-i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}

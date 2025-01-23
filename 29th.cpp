#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"entre roe : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char(64+j);
        }
        cout<<endl;
    }
}
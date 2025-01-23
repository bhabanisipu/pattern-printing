#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<min(i,j);
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter a number : ";
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
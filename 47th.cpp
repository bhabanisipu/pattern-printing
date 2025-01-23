#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int a=i;
        for(k=1;k<=i;k++){
            cout<<a<<" ";
        }
        a++;
        cout<<endl;
    }
}

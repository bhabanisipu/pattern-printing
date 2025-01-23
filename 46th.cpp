#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=n-i;j>=1;j--){
            cout<<" ";
        }
      int  a=i;
        for(k=i;k>=1;k--){
            cout<<k;
            a--;
        }
        cout<<endl;
    }
}
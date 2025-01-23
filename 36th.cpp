#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=4-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        int a=i-1;
        for(k=a;k>=1;k--){
            cout<<k;
            a--;
        }
        cout<<endl;
    }
}
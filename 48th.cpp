#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        int a=i;
        for(j=a;j>=1;j--){
            cout<<j;
            a--;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int i,j,a;
    for(i=1;i<=4;i++){
        if(i%2!=0) a=1;
        else a=0;
        for(j=1;j<=i;j++){
            cout<<a;
            if(a==1) a=0;
            else a=1;
        }
        cout<<endl;
    }
}
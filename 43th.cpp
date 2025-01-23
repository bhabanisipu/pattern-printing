#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int a;
    
    for(i=1;i<=4;i++){
        for(k=1;k<=4-i;k++){
            cout<<" ";
        }
        a=i;
        for(j=1;j<=i;j++){
            cout<<(char)(64+a);
            a--;
        }
        int b=i-1;
        for(j=1;j<=b;j++){
            cout<<(char)(65+j);
            
        }
        cout<<endl;
    }
}
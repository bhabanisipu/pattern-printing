#include<stdio.h>
int main(){
    int i,j,k;
    int nst=1;
    int nsp=3;
    for(i=1;i<=4;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp=nsp-1;
        for(k=1;k<=nst;k++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int i,j,k,l;
    for(i=1;i<=4;i++){
        for(j=1;j<=4-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        int a=i-1;
        for(l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<=3;i++){
        for(j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
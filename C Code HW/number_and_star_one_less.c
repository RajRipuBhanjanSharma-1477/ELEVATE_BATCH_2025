#include<stdio.h>
void main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i!=j)
            printf("%d*",i);
            else
            printf("%d",i);
        }
        printf("\n");
    }
}
#include<stdio.h>
int row=4;
void main(){
    for(int i=1;i<=row;i++){
        for(int num=1;num<=i;num++){
            printf("%d",i);
            printf("*");
        }
        printf("\n");
    }
}
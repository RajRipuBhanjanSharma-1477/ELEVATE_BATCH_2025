#include<stdio.h>
void main(){
    int n=4;
    for(int row=1;row<=n;row++){
        for(int space=1;space<=row-1;space++)
        printf(" ");
        for(int star=1;star<=n-row+1;star++)
        printf("*");
        printf("\n");
    }
}
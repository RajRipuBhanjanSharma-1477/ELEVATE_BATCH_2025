#include<stdio.h>
void main(){
    int row,col;
    row=5;
    int n=5;
    for(int i=1;i<=row;i++){
        for(int star=1;star<i;star++)
        printf("*");
        for(int space=1;space<=2*(n-i);space++)
        printf(" ");
        for(int star=1;star<i;star++)
        printf("*"); 
        printf("\n");
    }
}
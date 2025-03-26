#include<stdio.h>
void main(){
    int row,col;
    row=5;
    col=9;
    for(int i=1;i<=row;i++){
        for(int space=1;space<=5-i;space++)
        printf(" ");
        for(int star=1;star<=5;star++){
            if(star==1||star==5||i==1||i==row)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
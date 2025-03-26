#include<stdio.h>
void main(){
    int length,breath;
    printf("Enter length and breath : ");
    scanf("%d %d",&length,&breath);
    for(int row=1;row<=breath;row++){
        for(int col=1;col<=length;col++){
            if(row==1||row==breath||col==1||col==length)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
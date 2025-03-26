#include<stdio.h>
void main(){
    int row=5,col=9;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            if(i+j<5||i+j>9){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}
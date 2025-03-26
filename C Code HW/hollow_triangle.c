// hollow triangle
#include<stdio.h>
void main(){
    int row,col;
    row=4;
    col=7;
    for(int i;i<=row;i++){
        for(int j=1;j<=4-i;j++)
        printf(" ");
        for(int star=1;star<=2*i-1;star++){
            if(i==1||star==1||i==4||star==2*i-1){
                printf("*");

            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
// backward hollow rombus
#include<stdio.h>
void main(){
    int length, breath;
    printf(" Enter the length and breath : ");
    scanf("%d %d",&length,&breath);
    for(int row =1 ;row<=breath;row++){
        for(int space=1;space<=row;space++)
        printf(" ");
        for(int star=1;star<=length;star++){
            if(star==1||row==1||star==length||row==length)
            printf("*");
            else
            printf(" ");
        }
        printf("\n" );
    }
}
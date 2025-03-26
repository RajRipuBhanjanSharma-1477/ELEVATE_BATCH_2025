// printing hollow diamond shape
#include<stdio.h>
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int row=1;row<=2*n+1;row++){
    if(2*row-1<=2*n-1){
    for(int space=1;space<=n-row+1;space++)
    printf(" ");
    for(int star=1;star<=(2*row-1);star++){
        if(star==1||star==2*row-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    
    printf("\n");
    }
    else{
    for(int space=1;space<row-n+2;space++)
    printf(" ");
    for(int star=1;star<=((2*(n)-1)-row)*2+1;star++){
    if(star==1||star==((2*(n)-1)-row)*2+1){
    printf("*");}
    else{
    printf(" ");
    }
    }
    printf("\n");
    }
    }


}
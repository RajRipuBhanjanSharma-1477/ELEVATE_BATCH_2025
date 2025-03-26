/*Write a code for production of table for given input : a , b*/
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the a b value : ");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",a,i,a*i);
    }
    printf("-------------\n");
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",b,i,b*i);
    }
}
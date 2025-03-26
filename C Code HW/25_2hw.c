// Write a function for print the table of a given number
#include<stdio.h>
void table(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    table(input);
}
void table(int value){
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",value,i,i*value);
    }
}
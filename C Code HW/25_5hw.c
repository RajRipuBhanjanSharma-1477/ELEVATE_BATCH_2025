// Write a function to check wether the given number is strong number
#include<stdio.h>
void check(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    check(input);
}
void check(int i){
    int input=i;
    int sum=0;
    int tem=0;
    int prod=0;
    while(input){
        tem=input%10;
        input=input/10;
        prod=1;
        while(tem){
            prod=prod*tem;
            tem--;
        }
        sum=sum+prod;
    }
    if(sum==i)
    printf("The Given number %d is a strong number ",i);
    else
    printf("The Given number %d is not a strong number",i);
}
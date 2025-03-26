// Write a programe to find wether the given function is a prime number or not
#include<stdio.h>
void check(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    check(input);
}
void check(int x){
    int count=0;
    for(int i=2;i<=x;i++ ){
        if(x%i==0)
        count++;
    }
    if(count>1)
    printf("The Given number is not a prime number");
    else
    printf("The Given number is a prime number");
}
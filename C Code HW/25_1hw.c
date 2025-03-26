// Write a function for factorial
#include<stdio.h>
int factorial(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    int ans=factorial(input);
    printf("The factorial of the number %d is %d",input,ans);
}
int factorial(int i){
    int prod=1;
    while(i){
        prod*=i;
        i--;
    }
    return prod;
}
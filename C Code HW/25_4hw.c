// Write function to determine wheter the given number is perfect number
#include<stdio.h>
void perfect(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    perfect(input);
}
void perfect(int x){
    int sum=0;
    printf("factors which are less than the number : ");
    for(int i=1;i<x;i++){
        if(x%i==0){
            sum=sum+i;
            printf(" %d ",i);
        }
        
    }
    if(sum==x)
    printf("\nThe given number %d is a perfect number",x);
    else
    printf("\nThe given number %d is not a perfect number",x);
}
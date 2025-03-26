/*
print the following pattern
n=3
33333
32223
32123
32223
33333
*/
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number n : ");
    scanf("%d",&n);
    int decrement=1;
    for(int row=1;row<=2*n-1;row++){
        decrement=1;
        for(int col=1;col<=2*n-1;col++){
            printf("%d",n-decrement+1);
            if(decrement>1)
            decrement++;
        }
        printf("\n");
    }
}
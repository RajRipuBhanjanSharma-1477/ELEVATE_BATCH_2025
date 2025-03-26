/*Question 3 find the value of the expansion*/
#include<stdio.h>
void main(){
    int n,i_factorial;
    float answer=0.0;
    printf("Enter the n value : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        i_factorial=1;
        for(int j=1;j<=i;j++){
            i_factorial*=j;
        }
        answer+=(i*1.0/i_factorial);
    }
    printf("Answer : %f",answer);
}

/*
Question 1
Sin(x) expansion code

void main(){
    int x,n;
    printf("Enter the value x and term n : ");
    scanf("%d %d",&x,&n);
    printf("x : %d, n : %d",x,n);
}
*/
#include<stdio.h>
void main(){
    int x,n_term,x_factorial,x_power;
    float answer=0.0;
    int sign = 1;
    printf("Enter the value x and term n : ");
    scanf("%d %d",&x,&n_term);
    for(int i=1;i<=2*n_term;i++){
        if(i%2!=0){
            x_power=1;
            for(int j=1;j<=i;j++){
                x_power*=x;
            }
            x_factorial=1;
            for(int k=1;k<=i;k++){
                x_factorial*=k;
            }
            answer+=sign*(x_power*1.0/x_factorial);
            sign=-sign;
            
        }
    
    }
    
    printf("Answer : %f",answer);
}
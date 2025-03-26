// Create a function  to check wether the given function is a armstrong number
#include<stdio.h>
void check(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    check(input);
}
void check(int i){
    int len=0;
    int tem=i;
    while(tem){
        len++;
        tem=tem/10;
    }
    int sum=0;
    tem=i;
    int pow=1;
    int last_digit=0;
    while(tem){
        last_digit=tem%10;
        tem=tem/10;
        pow=1;
        for(int x=1;x<=len;x++)
            pow*=last_digit;
        sum+=pow;
    }
    if(sum==i)
    printf("The given number %d is a Armstrong number",i);
    else
    printf("The given number %d is not a Armstrong number",i);
}
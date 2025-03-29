// write a program for finding the steps for solving the Tower of hanoi
#include<stdio.h>
void toh(int,char,char,char);
void main(){
    printf("Enter the number of Disc : ");
    int n;
    scanf("%d",&n);
    printf("The steps for solving Tower of hanoi of %d plates are : \n",n);
    toh(n,'S','D','A');
}
void toh(int n,char source,char destination,char auxilary){
if(n==1){
    printf("%c ==> %c\n",source,destination);
    return;
}
toh(n-1,source,auxilary,destination);
printf("%c ==> %c\n",source,destination);
toh(n-1,auxilary,destination,source);
}   
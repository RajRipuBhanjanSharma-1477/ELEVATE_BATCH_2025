// write a code to print binary of the given number
#include<stdio.h>
void binary(int);
void octal(int);
void hexa(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    printf("The given binary number is %d\nBinary : ",input);
    binary(input);
    printf("\nOcatal : ");
    octal(input);
    printf("\nHexadecimal: ");
    hexa(input);
}
void binary(int i){
    if(i>0)
    binary(i/2);
    printf("%d",i%2);
}
void octal(int i){
    if(i>0)
    octal(i/8);
    printf("%o",i%8);
}
void hexa(int i){
    if(i>0)
    hexa(i/16);
    printf("%x",i%16);
}
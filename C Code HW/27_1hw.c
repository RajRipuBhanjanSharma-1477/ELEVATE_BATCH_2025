// write a code to print binary of the given number Write a code jisme hum saare option de using a menu regarding what we want decimal,octal,hexadecimal
#include<stdio.h>
void binary(int);
void octal(int);
void hexa(int);
void main(){
    printf("Enter a number : ");
    int input;
    scanf("%d",&input);
    printf("What Number system do you prefer choose the code for that:\nBinary - 1\nOctal - 2\nHexadecimal - 3\n");
    int choose;
    scanf("%d",&choose);
    printf("Code choosen : ");
    switch (choose)
    {
    case 1:
        printf("Binary : ");
        binary(input);
        break;
    case 2:
        printf("ocatal : ");
        binary(input);
        break;
    case 3:
        printf("hexadecimal : ");
        binary(input);
        break;
    default:
        printf("None of the case was chossen");
        break;
    }
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
/*
printing a backward solid rombus
 *****
  *****
   *****
    *****
     *****
*/
#include<stdio.h>
void main(){
    int length,breath;
    printf("Enter length and breath : ");
    scanf("%d %d",&length,&breath);
    for (int i=1;i<=breath;i++){
    for(int space=1;space<=i;space++)
    printf(" ");
    for(int star=1;star<=length;star++)
    printf("*");
    printf("\n");
    }
}

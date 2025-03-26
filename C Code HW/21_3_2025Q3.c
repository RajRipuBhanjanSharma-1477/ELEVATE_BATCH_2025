/*
print the following pattern
   1
  2 2
 3 3 3
4 4 4 4
*/
#include<stdio.h>
void main(){
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int space=1;space<=n-row;space++)
        printf(" ");
        int s=0;
        for(int num=1;num<=2*row-1;num++){
            if(s==0){
                printf("%d",row);
                s=1;
            }else{
                printf(" ");
                s=0;
            }
        }
        printf("\n");
    }
}
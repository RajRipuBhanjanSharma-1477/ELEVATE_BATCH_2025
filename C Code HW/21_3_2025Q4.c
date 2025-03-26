/*
print the following pattern
    1
   212
  32123
 4321234
543212345
*/
#include<stdio.h>
void main(){
    int n;
    printf("Enter a number n :");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int space=1;space<=n-row;space++)
        printf(" ");
        int tem=row+1;
        int copy=1;
        for(int num=1;num<=2*row-1;num++){
            if(tem>1){
                printf("%d",--tem);
            }else{
                printf("%d",++copy);
            }
        }
    printf("\n");
    }
}

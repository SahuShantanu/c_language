#include<stdio.h>

int main()
{
    int n,m,b;
    printf("enter first number:\n");
    scanf("%d",&n);
    printf("enter second number:\n");
    scanf("%d",&m);
    printf("enter third number:\n");
    scanf("%d",&b);
 
    if(n>m){
        if(n>b){
            printf("%d is maximum out of this number",n);
        }
        else{
            printf("%d is maximum out of this number",b);
        }
    }
        else{
            if(m>b){
                printf("%d is maximum out of this",m);
            }
            else{
                printf("%d is maximum out of this",b);
            }
        }
     
    return 0;
}

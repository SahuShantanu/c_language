#include <stdio.h>

int main() {
    
    float p,r,n;
  
    printf("enter the principle amount :\n");
    scanf("%f",&p);
    printf("enter the rate :\n");
    scanf("%f",&r);
     printf("enter the number of year :\n");
    scanf("%f",&n);
    printf("your simple interest is %.2f.",(p*r*n)/100);
  
    return 0;
}

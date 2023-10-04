#include <stdio.h>

int main() {
    
    float u,t,a;
    printf("enter the initial velocity :\n");
    scanf("%f",&u);
     printf("enter the time :\n");
    scanf("%f",&t);
     printf("enter the accleration :\n");
    scanf("%f",&a);
    printf("your displacement is %.2f",(u*t)+(0.5*a*t*t));
    return 0;
}

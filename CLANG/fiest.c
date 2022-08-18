#include <stdio.h>
#include <conio.h>  
int main(){
    int a,b,c, max;
    printf("Enter a number a : ");
    scanf("%d", &a);
    printf("Enter a number b : ");
    scanf("%d", &b);
    printf("Enter a number c : ");
    scanf("%d", &c);
    max=a;
    if (max<b)
    max=b;
    if (max<c)
    max=c;
    printf("maximum number is = %d", max);    
    return 0;
}

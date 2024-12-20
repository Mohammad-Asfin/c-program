#include<stdio.h>
void main(){
    int a, b, c, n, i;
    a=0;
    b=1;
    printf("Enter the Nth number:");
    scanf("%d", &n);
    for (i = 0;i <= n;i++)
    {
        c = a + b;
        printf("%d ",a);
        a = b;
        b = c;
    }
}

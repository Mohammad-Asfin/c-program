#include <stdio.h>
#include<math.h>
void main() {
    int a,b,c,d;
    float r1,r2;
    printf("Enter the a,b,c values:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1 = -b+sqrt(d)/(2*a);
        r2 = -b-sqrt(d)/(2*a);
        printf("Real and Distinct");
    }
    else if(d<0)
    {
        printf("Real and Imaginary");
    }else
    {
        r1 = -b/(2*a);
        r2 = r1;
        printf("Real and Equal");
    }
    printf("The roots of the give equation is :%d\n%d",r1,r2);
}

#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,c;
    float s,area;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-b)*(s-c));
    printf("The area is : %f",c);
    return 0;
}

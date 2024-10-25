#include <stdio.h>

void main() {
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive");
    }
    else if(n == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
}

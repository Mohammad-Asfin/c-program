#include <stdio.h>
void main() {
    int a[] = {1, 2, 3, 4, 5, 6},i,max = 0,min;
    for (i = 0;i < 6;i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if(min > a[i])
        {
            min = a [i];
        }
    }
    printf("Largest element = %d",max);
}    

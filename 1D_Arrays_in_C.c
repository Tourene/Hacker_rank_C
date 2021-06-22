#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    int aux;
    int total;
    int *arr;
    int i;
    
    i = 0;
    total = 0;
    scanf ("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    while (i < n)
    {
      scanf ("%d",&aux);
      arr[i] = aux;
      total += aux;
      i++;    
    }
    printf("%d\n",total);
    return (0);
}
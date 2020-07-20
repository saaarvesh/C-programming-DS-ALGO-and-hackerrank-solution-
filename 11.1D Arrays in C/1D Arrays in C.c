#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int sum=0;
    scanf("%d\n",&a);
    int *p=(int *)malloc(a* sizeof(int));

    for(int i=0;i<a;i++)
    {
         scanf("%d",&p[i]);
         sum=sum+p[i]; 
    }

    printf("%d",sum);
    return 0;
}

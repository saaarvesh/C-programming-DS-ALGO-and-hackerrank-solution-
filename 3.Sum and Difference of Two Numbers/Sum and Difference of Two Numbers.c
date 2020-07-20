#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float aa,bb;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    scanf("%f %f",&aa,&bb);
    float su=aa+bb;
    float sb=aa-bb;
    printf("%d %d\n",sum,sub);
     printf("%.1f %.1f",su,sb);

    return 0;
}

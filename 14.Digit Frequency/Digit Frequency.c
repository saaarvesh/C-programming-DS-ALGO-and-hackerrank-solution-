#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char c[1000];
    int *count;
    int i;
    
    count=(int *)calloc(10,sizeof(int));
    scanf("%s",c);

    for(i=0;i<strlen(c);i++)
       if(c[i]>='0' && c[i]<='9')
       {
          
          count[c[i]-48]++;
       }
    for(i=0;i<10;i++)
    printf("%d ",count[i]);

           
}

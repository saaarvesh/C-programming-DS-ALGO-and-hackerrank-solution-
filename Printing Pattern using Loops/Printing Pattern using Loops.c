#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int l=(n*2)-1;
    int min=0;
      for (int i=0;i<l;i++)
       {
           
        {
            for (int j=0;j<l;j++)
               {
                  min=(i<j)?i:j;
                  
                  min=min<(l-i-1)?min:(l-i-1);
                  min=min<(l-j-1)?min:(l-j-1);
                  printf("%d ",n-min); 
               }
            printf("\n");
        }
       }
    return 0;
}

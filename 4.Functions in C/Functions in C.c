#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d);
int main() {
                int a, b, c, d;
                scanf("%d %d %d %d", &a, &b, &c, &d);
                printf("%d", max_of_four(a, b, c, d));
                return 0;
           }
    int max_of_four(int a,int b,int c,int d)
      {
          int max=0;
          int max1=0;
          if(a>b)
              max=a;
          else
              max=b;
          
          
          if(c>d)
              max1=c;
          else
              max1=d;    
       
          if(max>max1)
              max=max;
          else
              max=max1;

              return max;
       }

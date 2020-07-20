#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fsum;
 void sum(int s)
 {
     fsum=s+fsum;

 }
int main() {
	
    int n;
    int s;
    scanf("%d", &n);
    while(n!=0)
      {
           s=n%10;
           sum(s);
           n=n/10;
      }
      printf("%d",fsum);
    return 0;
}
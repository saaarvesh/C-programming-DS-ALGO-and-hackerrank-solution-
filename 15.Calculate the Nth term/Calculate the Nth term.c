#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
     int first=a;
     int second=b;
     int third=c;
     int ans=first+second+third;
     n--;
     if(n>0)
          find_nth_term(n, second,  third,  ans);
     return ans;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

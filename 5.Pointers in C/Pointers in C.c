#include <stdio.h>

void update(int *a,int *b) {
    int c=0;
    int t=(*a);
    *a=(*a)+(*b);
    c=t-(*b);
    if(c>0)
        *b=c;
    else
        *b=(-c);
}  

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

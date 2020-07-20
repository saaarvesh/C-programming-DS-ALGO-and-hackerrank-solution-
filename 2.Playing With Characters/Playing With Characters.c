#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[20],ss[20];
    scanf("%c",&ch);
    scanf("%s\n",s);
    scanf("%[^\n]s",ss);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",ss);
    


    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

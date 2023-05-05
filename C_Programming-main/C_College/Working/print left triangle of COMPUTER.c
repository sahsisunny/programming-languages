#include <stdio.h>

void main()
{
    char str[]={"COMPUTER"};
    int w,n;
    for(n=1, w=8; n<=w; n++)
    printf("\n%*.*s", w, n, str);
    getchar();
}

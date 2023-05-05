#include <stdio.h>

void main()
{
    char str[]={"COMPUTER"};
    int w,n;
    printf("\n\n.......................Welcome to SHIELD SQUADS Programming Language.......................");
    for(n=1, w=8; n<=w; n++)
    printf("\n\n\t\t%-*.*s", w, n, str);
    printf("\n\n\t\t....................Thanks You....................");
    getchar();
}

// WAP to Whether Character is VOWEL or CONSTANT.
#include <stdio.h>

int main()
{
        char a;
        printf("\nEnter any alphabet:");
        scanf("%c", &a);
        if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            printf("........... %c is vowel...........", a);
        else
            printf("........%c is consonant.........", a);

}

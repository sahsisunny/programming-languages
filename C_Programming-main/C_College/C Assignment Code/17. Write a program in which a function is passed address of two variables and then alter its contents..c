#include <stdio.h>
void func(int*a,int*b)
{

    printf("a= %d b= %d ",*a,*b);
}

int main()
{
    int a=10,b=20;
    func(&a,&b);
    return 0;
}


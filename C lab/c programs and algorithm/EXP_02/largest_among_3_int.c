#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d largest",a);
    }
    else if(b>c && b>a)
    {        
        printf("%d largest",b);
    }
        else
        {
        printf("%d largest",c);
        }
}
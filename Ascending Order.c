/*
Name: Rakshit Raj
Description: Program to arrange 3 numbers in non-decreasing order
*/

#include<stdio.h>
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

main()
{
    int a,b,c;
    printf("Enter three integers\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        swap(&a,&b);
    }

    if(a>c)
    {
        swap(&a,&c);
    }

    if(b>c)
    {
        swap(&b,&c);
    }

    printf("%d<%d<%d",a,b,c);
}

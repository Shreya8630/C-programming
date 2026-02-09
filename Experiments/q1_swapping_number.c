#include <stdio.h>
void swap(int*a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d\n%d",&x,&y);
    printf("\nBefore swapping");
    printf("\nx=%d,y=%d",x,y);
    swap(&x,&y);
    printf("\nAfter swapping");
    printf("\nx=%d,y=%d",x,y);
    return 0;
}

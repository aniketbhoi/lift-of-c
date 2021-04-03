#include<stdio.h>
int fact(int);
void main()
{
    int n,fa;
    printf("enter a number");
    scanf("%d",&n);
    fa=fact(n);
    printf("factorial of the given number is %d",fa);

}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }return f;
}

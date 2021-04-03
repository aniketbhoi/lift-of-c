#include<stdio.h>
int square(int number)
{
return(number*number);
}
int main()
{
    int a;
   printf("enter the number");
   scanf("%d",&a);
   printf("The square of the number is %d ",square(a));
    return 0;

}


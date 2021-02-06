#include <stdio.h>
int main()
{
    float r,d,a,c;

    printf("Enter the radious of circle\t");
    scanf("%f",&r);
    d=2*r;
    printf("the diameter of the circle is %f\n",d);
    a=3.14*r*r;
    printf("the area of the circle is %f\n",a);
    c=2*3.14*r;
    printf("the circumference of the circle is %f\n",c);
    return 0;
}

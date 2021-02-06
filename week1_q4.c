#include <stdio.h>
int main()
{
    float p,ch,b,m,co,percentage;
    printf("enter the mark obtained in physics\n");
    scanf("%f",&p);
    printf("enter the mark obtained in chemistry\n");
    scanf("%f",&ch);
    printf("enter the mark obtained in bio\n");
    scanf("%f",&b);
    printf("enter the mark obtained in mathematics\n");
    scanf("%f",&m);
    printf("enter the mark obtained in computer\n");
    scanf("%f",&co);
    percentage=(p+ch+b+m+co)/5;
    if (percentage>=90)printf("grade A");
    else if (percentage>=90)printf("grade A");
    else if (percentage>=80)printf("grade B");
    else if (percentage>=70)printf("grade C");
    else if (percentage>=60)printf("grade D");
    else if (percentage>=40)printf("grade E");
    else if (percentage<40)printf("grade F");
    return 0;
}

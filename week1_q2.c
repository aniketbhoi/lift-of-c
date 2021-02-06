#include <stdio.h>
int main()
{
    float celcious;
    float ans;
    printf("Enter the temperature in celcious\t");
    scanf("%f",&celcious);
    ans=(celcious*1.8)+32;
    printf("The temperature in fahrenheit is %f\t",ans);
    return 0;
}

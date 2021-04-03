#include<stdio.h>
int reverse(int num)
{
    int a;
    int b;
    static int b=0;
    if (num!=0){
        a=num%10;
        b=b*10+a;
        reverse(num/10);}
    return b;
}
int main(){
    int number,b;
    printf("enter a number ");
    scanf("%d",%number);
    if(number==reverse(number))
        printf("th e given number is a palindrom number")
        else printf("the given number is not a palindrom")
        return

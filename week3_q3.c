#include<stdio.h> m  b
int gcd(int n1,int n2){
if (n2!=0)
    return gcd(n2,n1%n2);
    else return n1;
}
int main(){
int n1, n2;
printf("enter the first number\n");
scanf("%d", &n1);
printf("enter the second number \n");
scanf("%d",&n2);
printf("the GCD of %d and %d is %d\n and the LCM of %d and %d is %d",n1,n2,gcd(n1,n2),n1,n2,(n1*n2)/gcd(n1,n2));
return 0;}

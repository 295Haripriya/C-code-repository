//modular c to average value of 3values
#include<stdio.h>
int main()
{
    int a,b,c;
    int A;

    printf("Enter three int numbers:");
    scanf("%d%d%d",&a,&b,&c);

    A= a+b+c/3;
    printf("A=%d\n",A);
}

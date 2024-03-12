//modular c to find volume and surface area
#include<stdio.h>
float main()
{
    float r;
    float V,S;

    printf("Enter the value of radius:");
    scanf("%f:",&r);

    V = 1.33*3.14*r*r*r;
    S = 4*3.14*r*r;
    printf("V=%f\n",V);
    printf("S=%f\n",S);
}

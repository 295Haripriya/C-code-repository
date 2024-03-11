// modular c program to decide earth quake impact.
/*
Name:Apoorva
Division:S
Roll no.:1910
Date:17/01/2023
*/
#include<stdio.h>
//function prototype
void earth_quake(float n);
int main()
{
    float n;
    printf("Enter ritcher scale number\n");
    scanf("%f",&n);
    earth_quake(n);
    return 0;
}
void earth_quake(float n)
{
    if(n<5.00)
        printf("Little or no damage\n");
    else if(n<5.5)
        printf("some damage\n");
    else if(n<6.5)
        printf("serious damage: Walls may crack or fall\n");
        else if(n<7.5)
            printf("Disaster:house and building may collapse\n");
        else
            printf("Catastrophe:most buildings destroyed\n");
}





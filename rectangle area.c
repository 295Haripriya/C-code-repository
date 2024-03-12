//modular c pgm to compute area of circle and rectangle
include<stdio.h>
float main ()
{
    float r,l,b;
    float C,R;

    printf("Enter the value of radius,lenth,breadth:");
    scanf("%f%f%f",&r,&l,&b);

    C = 3.14*r*r;
    R = l*b;
    printf("C=%f\n",C);
    printf("R=%f\n",R);
}

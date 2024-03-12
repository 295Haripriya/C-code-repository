//modular c to compute total amt
#include<stdio.h>
float total_package_amount(char type_of_yatra,char type_of_package,int number_of_people);
int main()
{
  char type_of_yatra;
  char type_of_package;
  int number_of_people;
  float total_amount;
printf("Karnataka Special-K:");
    printf("Manasarovar yatra-M:");
  printf("Enter type of yatra,type of package,number of people:");
  scanf("%c%c%d",&type_of_yatra,&type_of_package,&number_of_people);

  if(type_of_yatra=='K'||type_of_yatra=='M')
  {
      total_amount=total_package_amount(type_of_yatra, type_of_package,number_of_people);
      printf("total_amount=%f\n",total_amount);}
   else
   {
        printf("Invalid");}
      return 0;
}

 //function definition:
float total_package_amount(char type_of_yatra,char type_of_package,int number_of_people)
{
  float total_amount;

   switch(type_of_yatra)
{

case 'K':
    if(type_of_package=='P')
    total_amount=10000*number_of_people;
    else if(type_of_package=='C')
    total_amount=8000*number_of_people;
    else if(type_of_package=='B')
    total_amount=5000*number_of_people;
break;
 case 'M':
    if(type_of_package=='P')
    total_amount=20000*number_of_people;
    else if(type_of_package=='C')
    total_amount=15000*number_of_people;
    else if(type_of_package=='B')
    total_amount==10000*number_of_people;
    break;

  }

return total_amount;

#include<stdio.h>
typedef struct recharge
{
    char mobile_no[11];
    float amt;
    int t_id;
    int day,mon,year;
    int hr,min,sec;
}RT;
typedef struct hotel
{
    char name[20],place[20];
    int days,t_id;
    float price;
}HT;
void read_recharge(RT*rptr)
{
    printf("Enter recharge details\n");
    printf("Enter mobile no,amt,transaction id,date and time\n");
    scanf("%s%0.2f%d%d%d%d%d%d%d",rptr->mobile_no,&rptr->amt,&rptr->t_id,&rptr->day,&rptr->mon,&rptr->year,&rptr->hr,&rptr->min,&rptr->sec);
}
void display_recharge(RT*rptr)
{
    printf("Recharge transaction details are \n");
    printf("Mobile no\tAmount\tTransaction id\tDate\tTime\t");
    printf("%s\t%0.2\t%d\t%d-%d-%d\t%d:%d:%d\n",rptr->mobile_no,rptr->amt,rptr->t_id,rptr->day,rptr->mon,rptr->year,rptr->hr,rptr->min,rptr->sec);
}
void read_hotel(HT*hptr)
{
    printf("Enter hotel booking details\n");
    printf("Enter hotel name,place,transaction id,days of stay,price of room\n");
    scanf("s%s%d%d%f",hptr->name,hptr->place,&hptr->t_id,&hptr->days,&hptr->price);
}
void display_hotel(HT*hptr)
{
    printf("Hotel booking details are\n");
    printf("name\tplace\tt_id\tdays\tprice\n");
    printf("%s\t%s\t%d\t%d\t%0.2f\n",hptr->name,hptr->place,hptr->t_id,hptr->days,hptr->price);
}
int main()
{
    RT re1;
    HT h1;
    read_recharge(&re1);
    display_recharge(&re1);
    read_hotel(&h1);
    display_hotel(&h1);
    return 0;
}

//armstrong number
 #include<stdio.h>
int main()
{
 int n,sum=0,r,temp,c;
 printf("Enter the number\n");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
   r=n%10;
   c=r*r*r;
   sum=sum+c;
   n=n/10;
 }
 n=temp;
 if(n==sum)
 {
  printf("Armstrong number\n");
 }
 else
 {
  printf("Not Armstrong\n");
 }
return 0;
}

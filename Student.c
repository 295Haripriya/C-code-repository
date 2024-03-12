#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int SRN;
    int ncourse;
    double CGPA;
    int DOB;
    char dept;

};
void readstudent(struct student*,int);
void displaystudent(struct student*,int);
void selectionSort(void*,int ,int,int(void*,void*));
void swap(void*,void*,int );
int cmpCGPA(void*,void*);
int main()
{
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    struct student*s;
    s=(struct student*)malloc(sizeof(struct student)*N);
    readstudent(s,N);
    displaystudent(s,N);
    printf("The sorted structure is:\n");
    displaystudent(s,N);
}

void readstudent(struct student*s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter name:");
        scanf("%s",&s[i].name);
        printf("Enter SRN:");
        scanf("%d",&s[i].SRN);
        printf("Enter number of course:");
        scanf("%d",&s[i].ncourse);
        printf("Enter CGPA:");
        scanf("%lf",&s[i].CGPA);
        printf("Enter Department:");
        scanf("%s",&s[i].dept);
        printf("Enter Date of birth:\n");
        scanf("%d%d%d",&s[i].DOB);

    }
}

void displaystudent(struct student*s,int n)

{
    int i;
    for(i=0;i<n;i++)
    {
         printf("\nName:%s\n",s[i].name);
         printf("SRN:%d\n",s[i].SRN);
         printf("Number of course:%d\n",s[i].ncourse);
         printf("CGPA:%lf\n",s[i].CGPA);
         printf("Department:%s\n",s[i].dept);
         printf("Enter Date of Birth:%d\n",s[i].DOB);

    }
}

void selectionSort(void*a,int n,int datasize,int(cmp)(void*,void*))
{

    char*x,*y,*z;
    int i,j,max;
    for(i=0;i<n-1;i++)
    {
        max=i;
        x=(char*)(a+i*datasize);
        y=(char*)(a+max*datasize);
        for(j=i+1;j<n;j++)
        {
            z=(char*)(a+j*datasize);
            if((*cmp)(y,z))
            {
                max=j;
                y=(char*)(a+max*datasize);
            }
         }
         swap(x,y,datasize);
    }

}
void swap(void*a,void*b,int s)

{

    char*p=(char*)a;
    char*q=(char*)b;
    char temp;
    int i;
    for(i=0;i<s;i++)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q++;

    }

}
int cmpCGPA(void*a,void*b)
{

    struct student*p=(struct student*)a;
    struct student*q=(struct student*)b;
    if(p->CGPA<q->CGPA)
        return 1;
    else
        return 0;
}

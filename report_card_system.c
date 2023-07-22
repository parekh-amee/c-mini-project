#include<stdio.h>
#include<string.h>
#include<strings.h>
struct student
{
    char name[20];
    float r_no,CP,AP,BE;
    float percentage;
};
int main()
{
    struct student a[3];
    int n,r;
    char ch='y';

    strcpy(a[1].name,"Amee Parekh");
    a[1].r_no=1;
    a[1].CP=90;
    a[1].AP=85;
    a[1].BE=80;


    strcpy(a[2].name,"Sagar Kothari");
    a[2].r_no=2;
    a[2].CP=89;
    a[2].AP=90;
    a[2].BE=70;


    strcpy(a[3].name,"Raj Vyas");
    a[3].r_no=3;
    a[3].CP=70;
    a[3].AP=85;
    a[3].BE=95;
    fflush(stdin);
//sytem("cls");
    while(ch=='y' || ch=='Y')
    {
        printf("\n\nWhat wouold you like to do?\n1.Report Card\n2.Modify Report card\n3.Exit\n\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
        {
            printf("\nEnter Roll no. of student : ");
            scanf("%d",&r);
            printf("\n\t\t\tREPORT CARD\n");
            printf("\nName :%s",a[r].name);
            printf("\nRoll no.: %0.0f",a[r].r_no);
            printf("\n\nMarks:\n\nCP : %f\nAP : %f\nBE : %f",a[r].CP,a[r].AP,a[r].BE);
            fflush(stdin);
            a[r].percentage=(float)(a[r].CP+a[r].AP+a[r].BE)/3;
            printf("\nPercentage : %f\n\n",a[r].percentage);
            break;

        }
        case 2:
        {
            printf("\nEnter Roll no. of student : ");
            scanf("%d",&r);
            printf("\n\t\t\tMODIFY STUDENT DETAILS\n");
            printf("\nName : ");
            fflush(stdin);
            gets(a[r].name);
            printf("\nMarks of CP : ");
            scanf("%f",&a[r].CP);
            printf("\nMarks of AP : ");
            scanf("%f",&a[r].AP);
            printf("\nMarks of BE : ");
            scanf("%f",&a[r].BE);

            printf("\n\t\t\tStudent's Modified Details\n");
            printf("\nName :%s",a[r].name);
            printf("\nRoll no.: %0.0f",a[r].r_no);
            printf("\n\nMarks:\n\nCP : %f\nAP : %f\nBE : %f",a[r].CP,a[r].AP,a[r].BE);
            break;

        }
        case 3:
        {
            break;
        }
        default:
        {
            printf("\nWrong Choice");
            break;
        }
        }
        printf("\n\nDo you want to continue?(y/n) : ");
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='n' || ch =='N')
        {
            break;
        }
    }

    return 0;
}

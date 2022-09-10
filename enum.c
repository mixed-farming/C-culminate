#include<stdio.h>

enum month {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
struct dates
{
    enum month m;
    int d;
};

char months[12][9]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
int max_date[12]= {31,28,31,30,31,30,31,31,30,31,30,31};


void printdate(struct dates date)
{
    printf("%s %d\n",months[date.m],date.d);
}

struct dates nextday(struct dates date)
{
    if (date.d==max_date[date.m])
    {
        if (date.m!=dec)
        {
            date.m++;
            date.d=1;
        }
        else
        {
            date.m=jan;
            date.d=1;
        }
    }
    else
    {
        date.d++;
    }
    return date;
}

int main()
{
    struct dates date1;
    enum month req_mon[5] = {dec,feb,mar,oct,dec};
    int req_date[5]= {12,28,14,31,31};
    for (int i=0; i<5; i++)
    {
        date1.m=req_mon[i];
        date1.d=req_date[i];
        printdate(date1);
        printdate(nextday(date1));
        printf("\n\n");
    }
    return 0;
}

#include<stdio.h>
struct date
{
int d, m, y;
};
int main()
{
struct date today, d1;
today.d=26;
today.m=7;
today.y=2015;

d1=today;

printf("enter today's date ");
scanf("%d/%d/%d", &d1.d, &d1.m, &d1.y);
printf("date: %d/%d/%d",d1.d,d1.m,d1.y);
return 0;
}

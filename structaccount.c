#include<stdio.h>
struct account
{
	int accountno;
	char accountname[20];
	float balance;
};
struct account input()
{
	struct account a;
printf("enter accountno accountname balance ");
scanf("%d",&a.accountno);
fflush(stdin);
gets(a.accountname);
scanf("%f",&a.balance);
return(a);
}
void display(struct account a)
{
	printf("\n %d %s %f", a.accountno, a.accountname, a.balance);
}
int main()
{
	struct account a1;
	a1=input();
	display(a1);
}

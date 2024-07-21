#include<stdio.h>
int main(){
	int a, b, c;
printf("enter three numbers\n");
scanf("%d%d%d", &a, &b, &c);
if(a>b)
{
	if(c>a)
		{
		printf("largest %d", c);
		}
	else
		{
		printf("largest %d", a);
		}
}
else
{
	if(b>c)
		{
		printf("largest %d", b);
		}
		else
		{
		printf("largest %d", c);
		}
}
		return 0;

}
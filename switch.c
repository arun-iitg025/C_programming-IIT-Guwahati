#include<stdio.h>
int main(){
	int choice, a, b, c;
	printf("1. addition\n");
	printf("2.0dd-even\n");
	printf("3.printing N numbers\n");

	printf("enter your choice");
	scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
	break;
case 2:
	printf("enter the number");
	scanf("%d",&a );
      if(a%2==0)
	printf("even number");
	else
	printf("odd number");
	break;
case 3:
	printf("enter the number");
	scanf("%d",&a);
	for(b=1;b<=a;b++)	
	printf("%d",b);
	break;
default:
	printf("invalid choice ");
}

return 0;
}
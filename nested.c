#include<stdio.h>
int main(){
	int a, b, c;
printf("enter three numbers\n");
scanf("%d%d%d", &a, &b, &c);
if(a>b&&a>c)
{
	printf("largest number=%d",a);
}
else
	{
		if(b>a&&a>c)
		{
		printf("largest number=%d",b);
		}
		else
		{
			printf("largest number=%d",c);
		}		

}

	return 0;
}
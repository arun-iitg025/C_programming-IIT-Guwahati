#include<stdio.h>
int main(){
	int a, b, t;
	printf("enter the values");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
printf("a=%d b=%d", a, b);




return 0;
}
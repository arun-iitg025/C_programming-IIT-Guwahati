/* teke something  return something */

#include<stdio.h>
#include<conio.h>
int add(int,int);
int main(){
	int x, y, s;
	printf("enter the values \n");
	scanf("%d%d", &x,&y);
	s=add(x,y);
	printf("sum is %d",s);
}
int add(int a, int b)
{
	int c;
	c=a+b;
	return (c);
}
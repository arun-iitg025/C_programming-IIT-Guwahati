/* takes something return nothing*/


#include<conio.h>
#include<stdio.h>
int main()
 {
	void add(void);
	add();
}
	void add()
{
	int a, b, c;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is %d",c);


}
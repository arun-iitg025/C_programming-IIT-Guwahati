#include<stdio.h>
void swap(int*, int*);
int main(){
	int a, b;
printf("enter the values ");
scanf("%d%d", &a, &b);
printf("before swap a=%d,b=%d \n",a, b);
swap(&a, &b);
printf("after swap a=%d, b=%d", a, b);
return 0;
}
void swap(int *x, int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
#include<stdio.h>
void swap(int*a, int*b);
int main(){
		int x=0, y=3, *px, *py;
		px=&x, py=&y;
		printf("x=%d y=%d \n",x ,y);
		swap(px, py);
		printf("x=%d y=%d",x, y);
		
}
void swap(int*a, int*b)
{
		int temp;
		temp= *a;
		*a=*b;
		*b=temp;
}
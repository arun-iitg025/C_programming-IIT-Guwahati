#include<stdio.h>
float division(int a ,int b);
int main(void){
		int x, y;
		float k;
		printf("enter the value");
		scanf("%d%d",&x,&y);
		k=division(x,y);
	printf("division =%f",k); 
	return 0;
}
float division(int m, int n)
{
		int p, q;
		p=m;
		q=n;
		float r;
		r=(float)p/(float)q;
            return(r);



}
#include<stdio.h>
int main(){
	int x=5,*j;
	j=&x;
printf("%d %u\n",x,j);
printf("%d %u\n",*j, &x);
printf("%u",*&j);



return 0;
}
#include<stdio.h>
int main(){
	int a, b, c;
printf("enter the numbers \n");
scanf("%d%d%d", &a, &b, &c);
printf("largest%d", a>b?a>c?a:c:b>c?b:c);




return 0;
}
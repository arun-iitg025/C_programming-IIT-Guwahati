#include<stdio.h>
int main(){
	char s[3][10];
int i;
printf("enter three strings");
for(i=0;i<=2;i++)
 	gets(&s[i][0]);

for(i=0;i<=2;i++)
	printf("%s\n",s[i]);

return 0;
}
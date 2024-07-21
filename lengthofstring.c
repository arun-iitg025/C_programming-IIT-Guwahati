#include<stdio.h>
int main(){
    char s[20];
    int i;
printf("enter the string ");
gets(s);
for(i=0;s[i]!='\0';i++);
printf("length of string is %d", i);





return 0;
}
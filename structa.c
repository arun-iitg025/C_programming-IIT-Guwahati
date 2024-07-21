#include<stdio.h>
struct stu
{
	
int sroll;
char sname[20];
int marks[5];
};
int main(){
		struct stu s;
	int i ,total=0;
	float avg;
	printf("enter the sroll\n ");
	scanf("%d",&s.sroll);
	printf("enter the sname\n ");
	scanf("%s",&s.sname);
	printf("enter the marks\n");
	for(i=0;i<5;i++)
{
	scanf("%d",&s.marks[i]);
	total=total+s.marks[i];
	avg=(float)total/5;

}
	printf("sroll=%d\n",s.sroll);
	printf("sname=%s\n", s.sname);
	printf("stotal=%d\n",total);
	printf("savg=%f",avg);
return 0;

}
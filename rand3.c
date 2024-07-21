// generate 10 random numberusing rand and srand function//

#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10], i, j, min, max, temp;
	max=min+9;
	srand(i);

for(i=0;i<=9;i++)
      {
	temp=rand()%10+min;
	for(j=0;j<=i-1;j++)
{
		if(temp==a[j])
		break;
      }
	if(i==j)
	      a[i]=temp;
	else
	      i--;
}
for(i=0;i<=9;i++)
	
	printf(" %d ", a[i]);
}

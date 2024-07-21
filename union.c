#include<stdio.h>
union item
{

	int x;
	float y;
	char z;
};
int main(){
	union item i1;
i1.x=5;
printf("\n%d",i1.x);
i1.y=5.40;
printf("\n%f",i1.y);
i1.z='b';
printf("\n%c",i1.z);


}

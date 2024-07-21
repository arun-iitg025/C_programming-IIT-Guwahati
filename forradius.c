#include<stdio.h>
#define PI 3.14159
int main(){
        int i, n;
float radius, area;
printf(" n=?");
scanf(" %d", &n);
for(i=1;i<=n;i++)
         printf("radius=?");
         scanf("%f",radius);
         area = PI*radius*radius;
printf("area=%f\n",area);





return 0;
}
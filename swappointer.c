#include<stdio.h>
void swap(int*a, int*b){
	int temp;
	temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x=15, y=24, *px,*py;
px=&x; py=&y;
printf("x=%d y=%d,px=%x, py=%x\n", x, y, px, py);
swap(px, py);
printf("x=%d y=%d, px=%x, py=%x\n, x, y, px, py");

}
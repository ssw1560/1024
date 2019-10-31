#include<stdio.h>
int main()
{
	int x,y,r;
	
	printf("두개의 정수 입력 : ");
	scanf("%d%d", &x, &y);
	printf("%d%d", &x, &y);
	
	if(y>x)
	{
	    temp=x;
		x = y;
		y = temp;
	 } 
	 while(y != 0)
	 {
	 	r = x % y;
	 	x=y;
	 	y=r;
	 }
	 printf("최대공약수는 %d입니다",x);
	 
}

#include<stdio.h>
int main()
{
	int i=1, hap=0;
	
	printf("숫자입력 : ");
	scanf("%d . &num");
	
	while(i <= num)
	{
		hap += i;
		i++;
	}
	
	printf("1부터  %d까지의합 =%d입니다.", num, hap);
}

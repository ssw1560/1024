#include<stdio.h>
#include<limits.h>
int main()
{
	//printf("%d|n", INT_MIN, INT_MAX);
	int min = INT_MAX, max = INT_MIN, i;
	
	printf("정수를 입력하시오(끝은^z를 누르면 됩니다):");
	while(scanf(%d, &number) != EOF)
	{
		if(number <min)
		   min = number;
		if(number > max)
		   max = number;
	}
	if(min == INT_MAX)
	   printf("입력한 숫자가 없습니다");
	else 
	    printf("입력한 수 들 중에 최소값 = %d, 최대값 = %d 입니다. |n", min, max);
	
	return 0;
}

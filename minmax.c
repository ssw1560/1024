#include<stdio.h>
#include<limits.h>
int main()
{
	//printf("%d|n", INT_MIN, INT_MAX);
	int min = INT_MAX, max = INT_MIN, i;
	
	printf("������ �Է��Ͻÿ�(����^z�� ������ �˴ϴ�):");
	while(scanf(%d, &number) != EOF)
	{
		if(number <min)
		   min = number;
		if(number > max)
		   max = number;
	}
	if(min == INT_MAX)
	   printf("�Է��� ���ڰ� �����ϴ�");
	else 
	    printf("�Է��� �� �� �߿� �ּҰ� = %d, �ִ밪 = %d �Դϴ�. |n", min, max);
	
	return 0;
}

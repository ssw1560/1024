#include<stdio.h>
long fact(int a)
{
	int i; 
	long fact=1;
	for(i=1;i<=a;i++)
	fact*=i;
	
	return fact;
}

int main()
{
	int num;
	
	printf("�˰� ���� ���丮���� ����? :");
	scanf("%d", &num);
	printf("%d!�� ���� %ld�Դϴ�.\n", num,fact(num));
}

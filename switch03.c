#include<stdio.h>

int main()
{
	int year, month, days;
	
	printf("�⵵ �Է� : ");
	scanf("%d", &year);
	printf("�� �Է� : ");
	scanf("%d", &month);
	
	switch(month)
	{
		case 2:
			if(year%4==0 && year%100!=0 || year%400==0)
				days = 29;
			else
				days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
	}
	printf("%d�� %d���� %d�� �Դϴ�.\n", year, month, days);
	
	return 0;
}

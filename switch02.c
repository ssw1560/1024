#include<stdio.h>

int main()
{
	int score;
	
	printf("���� �Է� : ");
	scanf("%d", &score);
	
	switch(score/10)
	{
		case 10:
		case 9:
			printf("����� ������ A�Դϴ�.");
			break;
		case 8:
			printf("����� ������ B�Դϴ�.");
			break; 
		case 7:
			printf("����� ������ C�Դϴ�.");
			break; 
		case 6:
			printf("����� ������ D�Դϴ�.");
			break; 
		default:
			printf("����� ������ F�Դϴ�.");
			
	}
	return 0; 
}

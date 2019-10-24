#include<stdio.h>

int main()
{
	int age, money=10000;
	
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	
	if(age < 19 || age > 60)
	{
		money -=5000;  //money = money - 5000
	 } 
	 printf("당신의 입장료는 %d원입니다.\n", money);
	 return 0;
}
